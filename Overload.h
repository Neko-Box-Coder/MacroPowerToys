#ifndef MPT_OVERLOAD_H
#define MPT_OVERLOAD_H

#include "./ArgsCount.h"

#define MPT_OVERLOAD_MACRO( NAME, ... ) \
        INTERNAL_MPT_COMPOSE3 \
        ( \
            INTERNAL_MPT_COMPOSE2 \
            ( \
                INTERNAL_MPT_SELECT, \
                ( NAME, MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ), \
            (__VA_ARGS__) \
        )


#endif
