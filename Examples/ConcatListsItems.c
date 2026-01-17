#include <stdio.h>
#include "ConcatListsItems.h"

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
int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    TEST__MPT_CONCAT_LISTS_ITEMS();
    printf("Passed\n");
    return 0;
}
