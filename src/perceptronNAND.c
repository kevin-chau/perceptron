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

int main()
{
    int x1, x2, result;

    x1 = 0;
    x2 = 0;
    result = perceptronNAND(x1, x2);
    assert(result == 1);
    printf("%i, %i => %i\n", x1, x2, result);

    x1 = 0;
    x2 = 1;
    result = perceptronNAND(x1, x2);
    assert(result == 1);
    printf("%i, %i => %i\n", x1, x2, result);

    x1 = 1;
    x2 = 0;
    result = perceptronNAND(x1, x2);
    assert(result == 1);
    printf("%i, %i => %i\n", x1, x2, result);

    x1 = 1;
    x2 = 1;
    result = perceptronNAND(x1, x2);
    assert(result == 0);
    printf("%i, %i => %i\n", x1, x2, result);

    return 0;
}