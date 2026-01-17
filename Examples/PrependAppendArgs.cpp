#include <stdio.h>

#include "AppendListsItems.h"
#include "PrependAppendArgs.h"

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

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    int testInt = 0;
    float testFloat = 0;
    char testChar = 'a';
    TEST__MPT_PREPEND_APPEND_ARGS(&testInt, &testFloat, &testChar);
    TEST__MPT_PREPEND_APPEND_ARGS__EMPTY();
    printf("Passed\n");
    return 0;
}
