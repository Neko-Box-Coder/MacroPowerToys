#include <assert.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

#include "MacroPowerToys.h"

#define TYPES_LIST int, char, void*
#define NAMES a, b, c
                                    //Expands to: `int a, char b, void* c`
void TEST__MPT_APPEND_LISTS_ITEMS( MPT_APPEND_LISTS_ITEMS(TYPES_LIST, NAMES) )
{
    (void)a;
    (void)b;
    (void)c;
}

                                            //Expands to: ``
void TEST__MPT_APPEND_LISTS_ITEMS__EMPTY( MPT_APPEND_LISTS_ITEMS() void)
{
}


void TEST__MPT_CONCAT_LISTS_ITEMS(void)
{
        //Expands to: `a1, b2`
    int MPT_CONCAT_LISTS_ITEMS(a, b, 1, 2);
    
    (void)a1;
    (void)b2;
    
        //Expands to: ``
    int MPT_CONCAT_LISTS_ITEMS( ) c3;
    (void)c3;
}

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

void TEST__MPT_COUNT_TO(void)
{
    {
            //Expands to: `a1b, a2b, a3b`
        int MPT_COUNT_TO_3_(a, b);
        (void)a1b;
        (void)a2b;
        (void)a3b;
    }
    
    {
            //Expands to: `a1b, a2b, a3b`
        int MPT_COUNT_TO(3, a, b);
        (void)a1b;
        (void)a2b;
        (void)a3b;
    }
    
    {
            //Expands to: ``
        int MPT_COUNT_TO_0_(a, b) c;
        (void)c;
    }
    
    {
            //Expands to: ``
        int MPT_COUNT_TO(0, a, b) c;
        (void)c;
    }
}

void TEST__MPT_COUNT_TO_MINUS_1(void)
{
    {
            //Expands to: `a1b, a2b, a3b`
        int MPT_COUNT_TO_4_MINUS_1(a, b);
        (void)a1b;
        (void)a2b;
        (void)a3b;
    }
    
    {
            //Expands to: `a1b, a2b, a3b`
        int MPT_COUNT_TO_MINUS_1(4, a, b);
        (void)a1b;
        (void)a2b;
        (void)a3b;
    }
}

#define REPEAT_TEST_SHUFFLE(arg1, arg2, arg3, arg4, arg5, arg6) arg1 arg4, arg2 arg5, arg3 arg6
                        //Expands to: `REPEAT_TEST_SHUFFLE (MPT_REPEAT_WITH_COMMA(3, int), c, d, e)`
                                                                //Expands to: `int, int, int`
                                        //Becoming: `REPEAT_TEST_SHUFFLE(int, int, int, c, d, e)`
void TEST__MPT_REPEAT( MPT_DELAYED_COMPOSE(REPEAT_TEST_SHUFFLE, (MPT_REPEAT_WITH_COMMA(3, int), c, d, e)) )
{
    (void)c;
    (void)d;
    (void)e;
    
        //Expands to: `5 + 5 + 5`   Expands to: `3,3,3,3,3, 3,3,3,3,3, 3,3,3,3,3`
    int a[MPT_REPEAT(3, +, 5)] = {MPT_REPEAT_WITH_COMMA(15, 3)};
    (void)a;
    
        //Expands to: `2 + 2 + 2`
    int b[MPT_REPEAT(3, +, 2)] = {0, 0, 0, 0, 0, 0};
    (void)b;
}

void TEST__MPT_GET_LAST_ARG(int a, int b, int c)
{
    (void)a;
    (void)b;
    (void)c;
    //Expands to: `c`
    int last = MPT_GET_LAST_ARG(a, b, c);
    assert(last == c);
}

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

void TEST__UTILS(void)
{
        //Expands to: `ITEM_1ITEM_2`
    int MPT_CONCAT( ITEM_1, ITEM_2 );
    (void)ITEM_1ITEM_2;
    
    //Expands to: `int ITEM_2`
    MPT_COMPOSE( int, ITEM_2 );
    (void) ITEM_2;
    
        //Expands to: `ITEM_1, ITEM_3`
    int MPT_REMOVE_PARENTHESIS( (ITEM_1, ITEM_3) );
    (void)ITEM_1;
    (void)ITEM_3;
}

                                        //Expands to: `int a, float b, int c`
float TEST__REMOVE_PARENTHESIS_IN_LIST( MPT_REMOVE_PARENTHESIS_IN_LIST((int a), (float b), int c) )
{
    return a + b + c;
}

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

void TEST__MPT_PREPEND_APPEND_ARGS  (
                                        //Expands to: `const int * a1, const float * a2, const char * a3`
                                        MPT_APPEND_LISTS_ITEMS
                                        (
                                            //Expands to: `const int *, const float *, const char *`
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

                                        //Expands to: ``
void TEST__MPT_PREPEND_APPEND_ARGS__EMPTY(MPT_PREPEND_APPEND_ARGS(a, b, ) void)
{
    
}


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


MPT_START_COUNTER_AND_INCREMENT(TestCounter, 0);

MPT_INCREMENT_COUNTER(1);
MPT_INCREMENT_COUNTER(2);

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    MPT_START_COUNTER_AND_INCREMENT(TestCounter2, 3);
    
    MPT_INCREMENT_COUNTER(4);

    TEST__MPT_APPEND_LISTS_ITEMS(1, 'a', NULL);
    TEST__MPT_CONCAT_LISTS_ITEMS();
    assert( TEST__MPT_ARGS_COUNT(1, 2) == 2 );
    assert( TEST__MPT_ARGS_COUNT__EMPTY() == 0 );
    assert( TEST__MPT_ARGS_COUNT_PAREN_FIRST_ARG() == 3 );
    
    TEST__MPT_COUNT_TO();
    TEST__MPT_COUNT_TO_MINUS_1();
    TEST__MPT_REPEAT(1, 2, 3);
    TEST__MPT_GET_LAST_ARG(1, 2, 3);
    TEST__MPT_ARE_ARGS_EMPTY();
    TEST__UTILS();
    assert( TEST__REMOVE_PARENTHESIS_IN_LIST(5, 6.f, 2) == 13 );
    TEST__MPT_OVERLOAD_MACRO();
    TEST__MPT_PREFIX_SUFFIX_ARGS();
    
    MPT_INCREMENT_COUNTER(5);
    
    int testInt;
    float testFloat;
    char testChar;
    TEST__MPT_PREPEND_APPEND_ARGS(&testInt, &testFloat, &testChar);
    TEST__MPT_PREPEND_APPEND_ARGS__EMPTY();

    TEST__MPT_ARGS_OPT(1, 2);
    TEST__MPT_ARGS_OPT2(1);

    MPT_INCREMENT_COUNTER(6);

    assert( MPT_GET_COUNT_AND_INCREMENT(TestCounter, 7) == 7 );

    assert( MPT_GET_COUNT_AND_INCREMENT(TestCounter2, 8) == 8 - 3 );

    printf("All tests passed\n");
    
    return 0;
}
