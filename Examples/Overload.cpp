#include <stdio.h>
#include <assert.h>
#include "Overload.h"

void TEST__MPT_OVERLOAD_MACRO(void)
{
    #define MACRO_FUNC_0() 0
    #define MACRO_FUNC_1( a ) a
    #define MACRO_FUNC_2( a, b ) a + b
    #define MACRO_FUNC( ... ) MPT_OVERLOAD_MACRO( MACRO_FUNC, __VA_ARGS__ )
    
            //Expands to: `MACRO_FUNC_0()`
    assert( MACRO_FUNC() == 0 );
            //Expands to: `MACRO_FUNC_1(10)`
    assert( MACRO_FUNC(10) == 10 );
            //Expands to: `MACRO_FUNC_2(1,2)`
    assert( MACRO_FUNC(1, 2) == 3 );
            //Expands to: `MACRO_FUNC_2((1),2)`
    assert( MACRO_FUNC((1), 2) == 3 ); //Testing first param with parentheses
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_OVERLOAD_MACRO();
    printf("Passed\n");
    return 0;
}
