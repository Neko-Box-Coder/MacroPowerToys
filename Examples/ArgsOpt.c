#include <stdio.h>
#include "ArgsOpt.h"

#define TEST_MPT_APPEND_ARGS( ... ) MPT_ARGS_OPT( (__VA_ARGS__), (,) ) __VA_ARGS__
                                //Expands to: `MPT_ARGS_OPT( (int b), (,) ) int b`
                                //Becomes: `, int b`
void TEST__MPT_ARGS_OPT( int a TEST_MPT_APPEND_ARGS(int b) )
{
    (void)a;
    (void)b;
}
                                //Expands to: `MPT_ARGS_OPT( (), (,) )`
                                //Becomes: ``
void TEST__MPT_ARGS_OPT2( int a TEST_MPT_APPEND_ARGS() )
{
    (void)a;
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_ARGS_OPT(1, 2);
    TEST__MPT_ARGS_OPT2(1);
    printf(__FILE__" Passed\n");
    return 0;
}
