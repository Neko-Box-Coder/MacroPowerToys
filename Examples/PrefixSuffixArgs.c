#include <stdio.h>
#include "PrefixSuffixArgs.h"

void TEST__MPT_PREFIX_SUFFIX_ARGS(void)
{
        //Expands to: `a1b, a2b, a3b`
    int MPT_PREFIX_SUFFIX_ARGS( a, b, 1, 2, 3 );
    (void)a1b;
    (void)a2b;
    (void)a3b;

        //Expands to: `a1, a2, a3`
    int MPT_PREFIX_SUFFIX_ARGS( a, /* */, 1, 2, 3 );
    (void)a1;
    (void)a2;
    (void)a3;

    //Expands to: ``
    MPT_PREFIX_SUFFIX_ARGS( a, b );
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_PREFIX_SUFFIX_ARGS();
    printf("Passed\n");
    return 0;
}
