#include <stdio.h>
#include "Miscellaneous.h"
#include "CountTo.h"

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

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__MPT_COUNT_TO();
    TEST__MPT_COUNT_TO_MINUS_1();
    TEST__MPT_REPEAT(1, 2, 3);
    printf("Passed\n");
    return 0;
}
