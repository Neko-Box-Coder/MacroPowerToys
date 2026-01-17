#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "Miscellaneous.h"
#include "AreArgsEmpty.h"

#define STR(x) #x
#define DELAYED_STR(x) MPT_COMPOSE(STR, (x))
void TEST__MPT_ARE_ARGS_EMPTY(void)
{
                                //Expands to: `EMPTY`
    assert( strcmp( DELAYED_STR( MPT_ARE_ARGS_EMPTY() ), "EMPTY") == 0 );
                                //Expands to: `NOT_EMPTY`
    assert( strcmp( DELAYED_STR( MPT_ARE_ARGS_EMPTY(1) ), "NOT_EMPTY") == 0 );
                                //Expands to: `NOT_EMPTY`
    assert( strcmp( DELAYED_STR( MPT_ARE_ARGS_EMPTY(1, 2) ), "NOT_EMPTY") == 0 );
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_ARE_ARGS_EMPTY();
    printf("Passed\n");
    return 0;
}
