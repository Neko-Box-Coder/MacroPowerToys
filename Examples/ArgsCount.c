#include <stdio.h>
#include <assert.h>
#include "ArgsCount.h"

int TEST__MPT_ARGS_COUNT(int a1, int b2)
{
    (void)a1;
    (void)b2;
            //Expands to: `2`
    return MPT_ARGS_COUNT(a1, b2);
}

int TEST__MPT_ARGS_COUNT__EMPTY(void)
{
            //Expands to: `0`
    return MPT_ARGS_COUNT();
}

int TEST__MPT_ARGS_COUNT_PAREN_FIRST_ARG()
{
            //Expands to: `1`                       Expands to: `2`
    return MPT_ARGS_COUNT((std::tuple<int, int>)) + MPT_ARGS_COUNT((std::tuple<int, int>), int);
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    assert( TEST__MPT_ARGS_COUNT(1, 2) == 2 );
    assert( TEST__MPT_ARGS_COUNT__EMPTY() == 0 );
    assert( TEST__MPT_ARGS_COUNT_PAREN_FIRST_ARG() == 3 );
    printf("Passed\n");
    return 0;
}
