#include <stdio.h>
#include "Miscellaneous.h"

void TEST__UTILS(void)
{
        //Expands to: `ITEM_1ITEM_2`
    int MPT_CONCAT( ITEM_1, ITEM_2 );
    (void)ITEM_1ITEM_2;
    
    //Expands to: `int ITEM_2`
    MPT_COMPOSE( int, ITEM_2 );
    (void) ITEM_2;
}

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    TEST__UTILS();
    printf(__FILE__" Passed\n");
    return 0;
}
