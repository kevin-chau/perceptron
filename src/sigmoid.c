#include "sigmoid.h"
#include <assert.h>

int main()
{
    assert(sigmoid(1000) > .99);
    assert(sigmoid(0) == .5);
    assert(sigmoid(-1000) < .01);
    return 0;
}