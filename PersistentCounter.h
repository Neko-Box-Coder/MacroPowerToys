#ifndef MPT_PERSISTENT_COUNTER_H
#define MPT_PERSISTENT_COUNTER_H

#define INTERNAL_MPT_PC_CONCAT( A, B ) A ## B

#ifdef __COUNTER__
    #define MPT_START_COUNTER_AND_INCREMENT(name, ...) enum { name = __COUNTER__ }

    #define INTERNAL_MPT_INCREMENT_COUNTER(counter) enum { INTERNAL_MPT_PC_CONCAT(INTERNAL_MPT, counter) = counter }
    #define MPT_INCREMENT_COUNTER(...) INTERNAL_MPT_INCREMENT_COUNTER(__COUNTER__)

    #define MPT_GET_COUNT_AND_INCREMENT(name, ...) (__COUNTER__ - name)
#else
    #define MPT_START_COUNTER_AND_INCREMENT(name, ...) "error: __COUNTER__ is not supported".

    #define MPT_INCREMENT_COUNTER(...) "error: __COUNTER__ is not supported".

    #define MPT_GET_COUNT_AND_INCREMENT(name, ...) "error: __COUNTER__ is not supported".
#endif

#endif
