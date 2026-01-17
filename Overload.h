#ifndef MPT_OVERLOAD_H
#define MPT_OVERLOAD_H

#include "./ArgsCount.h"

#define INTERNAL_MPT_O_COMPOSE( A, B ) A B
#define INTERNAL_MPT_O_COMPOSE2( A, B ) A B
#define INTERNAL_MPT_O_COMPOSE3( A, B ) A B
#define INTERNAL_MPT_O_COMPOSE4( A, B ) A B

#define INTERNAL_MPT_O_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_O_SELECT( NAME, NUM ) INTERNAL_MPT_O_CONCAT( NAME ## _, NUM )

#define INTERNAL_MPT_O_CONCAT2( A, B ) A ## B
#define INTERNAL_MPT_O_SELECT2( NAME, NUM ) INTERNAL_MPT_O_CONCAT2( NAME ## _, NUM )

#define MPT_OVERLOAD_MACRO( NAME, ... ) \
        INTERNAL_MPT_O_COMPOSE \
        ( \
            INTERNAL_MPT_O_COMPOSE2 \
            ( \
                INTERNAL_MPT_O_SELECT, \
                ( NAME, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ), \
            (__VA_ARGS__) \
        )

#define INTERNAL_MPT_OVERLOAD_MACRO( NAME, ... ) \
        INTERNAL_MPT_O_COMPOSE3 \
        ( \
            INTERNAL_MPT_O_COMPOSE4 \
            ( \
                INTERNAL_MPT_O_SELECT2, \
                ( NAME, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ), \
            (__VA_ARGS__) \
        )


#endif
