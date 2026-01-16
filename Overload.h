#ifndef MPT_OVERLOAD_H
#define MPT_OVERLOAD_H

#include "./ArgsCount.h"
#include "./Miscellaneous.h"

#define MPT_OVERLOAD_MACRO( NAME, ... ) \
        INTERNAL_MPT_COMPOSE15 \
        ( \
            INTERNAL_MPT_COMPOSE16 \
            ( \
                INTERNAL_MPT_SELECT6, \
                ( NAME, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ), \
            (__VA_ARGS__) \
        )

#define INTERNAL_MPT_OVERLOAD_MACRO( NAME, ... ) \
        INTERNAL_MPT_COMPOSE17 \
        ( \
            INTERNAL_MPT_COMPOSE18 \
            ( \
                INTERNAL_MPT_SELECT7, \
                ( NAME, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ), \
            (__VA_ARGS__) \
        )


#endif
