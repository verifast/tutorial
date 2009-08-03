#include "stdlib.h"

int int_add(int x, int y)
    //@ requires true;
    //@ ensures result == x + y;
{
    //@ assume_is_int(x);
    //@ assume_is_int(y);
    if (0 <= x) {
        if (MAX_INT - x < y) abort();
    } else {
        if (y < MIN_INT - x) abort();
    }
    return x + y;
}

int main()
    //@ requires true;
    //@ ensures true;
{
    int x = 2000000000 + 2000000000;
    assert(0 <= x);
    return 0;
}
