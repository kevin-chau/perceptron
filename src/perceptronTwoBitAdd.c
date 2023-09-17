// A simple single perceptron
// http://neuralnetworksanddeeplearning.com/chap1.html
#include <stdio.h>
#include <assert.h>

// Logical NAND gate implemented as a perceptron
int perceptronNAND(int x1, int x2)
{
    int w1 = -2;
    int w2 = -2;
    int bias = 3;

    if ((w1*x1+w2*x2) + bias > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void twoBitAdd(int x1, int x2, int* sum, int* carry)
{
    int NAND1 = perceptronNAND(x1, x2);
    int NAND2 = perceptronNAND(x1, NAND1);
    int NAND3 = perceptronNAND(NAND1, x2);
    *sum = perceptronNAND(NAND2, NAND3);
    *carry = perceptronNAND(NAND1, NAND1);
    return;
}

int main()
{
    int x1, x2, sum, carry;

    x1 = 0;
    x2 = 0;
    twoBitAdd(x1, x2, &sum, &carry);
    assert(sum == 0);
    assert(carry == 0);
    printf("%i, %i => %i, %i\n", x1, x2, sum, carry);

    x1 = 0;
    x2 = 1;
    twoBitAdd(x1, x2, &sum, &carry);
    assert(sum == 1);
    assert(carry == 0);
    printf("%i, %i => %i, %i\n", x1, x2, sum, carry);

    x1 = 1;
    x2 = 0;
    twoBitAdd(x1, x2, &sum, &carry);
    assert(sum == 1);
    assert(carry == 0);
    printf("%i, %i => %i, %i\n", x1, x2, sum, carry);

    x1 = 1;
    x2 = 1;
    twoBitAdd(x1, x2, &sum, &carry);
    assert(sum == 0);
    assert(carry == 1);
    printf("%i, %i => %i, %i\n", x1, x2, sum, carry);

    return 0;
}