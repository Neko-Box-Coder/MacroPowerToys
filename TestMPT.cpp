#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "MacroPowerToys.h"

#define TYPES_LIST int, char, void*
#define NAMES a, b, c

void TEST__MPT_APPEND_LISTS_ITEMS(MPT_APPEND_LISTS_ITEMS( TYPES_LIST, NAMES ))
{
    (void)a;
    (void)b;
    (void)c;
}

void TEST__MPT_APPEND_LISTS_ITEMS__EMPTY(MPT_APPEND_LISTS_ITEMS(  ) void)
{
}


void TEST__MPT_CONCAT_LISTS_ITEMS(void)
{
    int MPT_CONCAT_LISTS_ITEMS(a, b, 1, 2);
    
    (void)a1;
    (void)b2;
    
    //Test empty
    int MPT_CONCAT_LISTS_ITEMS( ) c3;
    (void)c3;
}

int TEST__MPT_ARGS_COUNT(int a1, int b2)
{
    (void)a1;
    (void)b2;
    return MPT_ARGS_COUNT(a1, b2);
}

int TEST__MPT_ARGS_COUNT__EMPTY(void)
{
    return MPT_ARGS_COUNT();
}

int TEST__MPT_ARGS_COUNT_PAREN_FIRST_ARG()
{
    return MPT_ARGS_COUNT((std::tuple<int, int>)) + MPT_ARGS_COUNT((std::tuple<int, int>), int);
}

void TEST__MPT_COUNT_TO(void)
{
    int MPT_COUNT_TO_3_(a, b);
    (void)a1b;
    (void)a2b;
    (void)a3b;
    
    int MPT_COUNT_TO_0_(a, b) c;
    (void)c;
}

void TEST__MPT_COUNT_TO_MINUS_1(void)
{
    int MPT_COUNT_TO_4_MINUS_1(a, b);
    (void)a1b;
    (void)a2b;
    (void)a3b;
}

void TEST__MPT_GET_LAST_ARG(int a, int b, int c)
{
    (void)a;
    (void)b;
    (void)c;
    int last = MPT_GET_LAST_ARG(a, b, c);
    assert(last == c);
}

#define STR(x) #x
#define DELAYED_STR(x) MPT_COMPOSE(STR, (x))

void TEST__MPT_ARE_ARGS_EMPTY(void)
{
    assert( strcmp( DELAYED_STR( MPT_ARE_ARGS_EMPTY() ), "EMPTY") == 0 );
    assert( strcmp( DELAYED_STR( MPT_ARE_ARGS_EMPTY(1) ), "NOT_EMPTY") == 0 );
    assert( strcmp( DELAYED_STR( MPT_ARE_ARGS_EMPTY(1, 2) ), "NOT_EMPTY") == 0 );
}

void TEST__UTILS(void)
{
    int MPT_CONCAT( ITEM_1, ITEM_2 );
    (void)ITEM_1ITEM_2;
    
    MPT_COMPOSE( int, ITEM_2 );
    (void) ITEM_2;
    
    int MPT_REMOVE_PARENTHESIS( (ITEM_1, ITEM_3) );
    (void)ITEM_1;
    (void)ITEM_3;
}

void TEST__MPT_OVERLOAD_MACRO(void)
{
    #define MACRO_FUNC_0() 0
    #define MACRO_FUNC_1( a ) a
    #define MACRO_FUNC_2( a, b ) a + b
    #define MACRO_FUNC( ... ) MPT_OVERLOAD_MACRO( MACRO_FUNC, __VA_ARGS__ )
    
    
    assert( MACRO_FUNC() == 0 );
    assert( MACRO_FUNC(10) == 10 );
    assert( MACRO_FUNC(1, 2) == 3 );
}

void TEST__MPT_PREFIX_SUFFIX_ARGS(void)
{
    int MPT_PREFIX_SUFFIX_ARGS( a, b, 1, 2, 3 );
    (void)a1b;
    (void)a2b;
    (void)a3b;

    int MPT_PREFIX_SUFFIX_ARGS( a, /* */, 1, 2, 3 );
    (void)a1;
    (void)a2;
    (void)a3;

    MPT_PREFIX_SUFFIX_ARGS( a, b );
}

void TEST__MPT_PREPEND_APPEND_ARGS  (
                                        MPT_APPEND_LISTS_ITEMS
                                        (
                                            MPT_PREPEND_APPEND_ARGS
                                            (
                                                const, 
                                                *, 
                                                int, 
                                                float, 
                                                char
                                            ), 
                                            a1, 
                                            a2, 
                                            a3
                                        )
                                    )
{
    (void)a1;
    (void)a2;
    (void)a3;
}

void TEST__MPT_PREPEND_APPEND_ARGS__EMPTY(MPT_PREPEND_APPEND_ARGS(a, b, ) void)
{
    
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_APPEND_LISTS_ITEMS(1, 'a', NULL);
    TEST__MPT_CONCAT_LISTS_ITEMS();
    assert( TEST__MPT_ARGS_COUNT(1, 2) == 2 );
    assert( TEST__MPT_ARGS_COUNT__EMPTY() == 0 );
    assert( TEST__MPT_ARGS_COUNT_PAREN_FIRST_ARG() == 3 );
    
    TEST__MPT_COUNT_TO();
    TEST__MPT_COUNT_TO_MINUS_1();
    TEST__MPT_GET_LAST_ARG(1, 2, 3);
    TEST__MPT_ARE_ARGS_EMPTY();
    TEST__UTILS();
    TEST__MPT_OVERLOAD_MACRO();
    TEST__MPT_PREFIX_SUFFIX_ARGS();
    
    int testInt;
    float testFloat;
    char testChar;
    TEST__MPT_PREPEND_APPEND_ARGS(&testInt, &testFloat, &testChar);
    TEST__MPT_PREPEND_APPEND_ARGS__EMPTY();

    printf("All tests passed\n");
    
    return 0;
}
