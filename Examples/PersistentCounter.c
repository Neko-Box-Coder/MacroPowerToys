#include <stdio.h>
#include <assert.h>
#include "PersistentCounter.h"

MPT_START_COUNTER_AND_INCREMENT(TestCounter, 0);

MPT_INCREMENT_COUNTER(1);
MPT_INCREMENT_COUNTER(2);

int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;
    
    MPT_START_COUNTER_AND_INCREMENT(TestCounter2, 3);
    
    MPT_INCREMENT_COUNTER(4);
    MPT_INCREMENT_COUNTER(5);
    
    MPT_INCREMENT_COUNTER(6);

    assert( MPT_GET_COUNT_AND_INCREMENT(TestCounter, 7) == 7 );

    assert( MPT_GET_COUNT_AND_INCREMENT(TestCounter2, 8) == 8 - 3 );

    printf("Passed\n");
    
    return 0;
}
