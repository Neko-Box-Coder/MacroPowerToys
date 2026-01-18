#include <stdio.h>
#include <assert.h>
#include "GetLastArg.h"

void TEST__MPT_GET_LAST_ARG(int a, int b, int c)
{
    (void)a;
    (void)b;
    (void)c;
    //Expands to: `c`
    int last = MPT_GET_LAST_ARG(a, b, c);
    assert(last == c);
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_GET_LAST_ARG(1, 2, 3);
    printf(__FILE__" Passed\n");
    return 0;
}
