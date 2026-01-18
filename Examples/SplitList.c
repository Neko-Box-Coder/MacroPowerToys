#include <stdio.h>
#include "SplitList.h"

typedef struct
{
    MPT_SPLIT_LIST(;, int a, char b, float c);
} TestStruct;

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TestStruct test;
    (void) test.a;
    (void) test.b;
    (void) test.c;
    
    printf(__FILE__" Passed\n");
    return 0;
}
