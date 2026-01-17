#include <stdio.h>
#include <assert.h>
#include "RemoveParenthesisInList.h"

void TEST__REMOVE_PARENTHESIS(void)
{
    int MPT_REMOVE_PARENTHESIS( (ITEM_1, ITEM_3) );
    (void)ITEM_1;
    (void)ITEM_3;
}

                                        //Expands to: `int a, float b, int c`
float TEST__REMOVE_PARENTHESIS_IN_LIST( MPT_REMOVE_PARENTHESIS_IN_LIST((int a), (float b), int c) )
{
    return a + b + c;
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__REMOVE_PARENTHESIS();
    assert( TEST__REMOVE_PARENTHESIS_IN_LIST(5, 6.f, 2) == 13 );
    printf("Passed\n");
    return 0;
}
