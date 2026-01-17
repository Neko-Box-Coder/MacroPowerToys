#include <stdio.h>
#include "AppendListsItems.h"

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

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    TEST__MPT_APPEND_LISTS_ITEMS(1, 'a', NULL);
    printf("Passed\n");
    return 0;
}
