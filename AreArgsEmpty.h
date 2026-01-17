#ifndef MPT_IS_EMPTY_ARGS_H
#define MPT_IS_EMPTY_ARGS_H

#define INTERNAL_MPT_IE_COMPOSE( A, B ) A B
#define INTERNAL_MPT_IE_COMPOSE2( A, B ) A B
#define INTERNAL_MPT_IE_COMPOSE3( A, B ) A B
#define INTERNAL_MPT_IE_COMPOSE4( A, B ) A B

#define INTERNAL_MPT_IE_DELAY( ... ) __VA_ARGS__
#define INTERNAL_MPT_IE_DELAYED_COMPOSE_INNER(macro, args) INTERNAL_MPT_IE_COMPOSE( macro, args )
#define INTERNAL_MPT_IE_DELAYED_COMPOSE(macro, args) INTERNAL_MPT_IE_DELAYED_COMPOSE_INNER( macro, INTERNAL_MPT_IE_DELAY(args) )

#define INTERNAL_MPT_IE_DELAY2( ... ) __VA_ARGS__
#define INTERNAL_MPT_IE_DELAYED_COMPOSE_INNER2(macro, args) INTERNAL_MPT_IE_COMPOSE2( macro, args )
#define INTERNAL_MPT_IE_DELAYED_COMPOSE2(macro, args) INTERNAL_MPT_IE_DELAYED_COMPOSE_INNER2( macro, INTERNAL_MPT_IE_DELAY2(args) )

#define INTERNAL_MPT_IE_MULTI_CONCAT( A, ... ) A ## __VA_ARGS__
#define INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT_INNER(A, ...) INTERNAL_MPT_IE_MULTI_CONCAT(A, __VA_ARGS__)
#define INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT(A, ...) INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT_INNER(A, __VA_ARGS__)

#define INTERNAL_MPT_IE_MULTI_CONCAT2( A, ... ) A ## __VA_ARGS__
#define INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT_INNER2(A, ...) INTERNAL_MPT_IE_MULTI_CONCAT2(A, __VA_ARGS__)
#define INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT2(A, ...) INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT_INNER2(A, __VA_ARGS__)

#define INTERNAL_MPT_IE_GET_COUNT(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, \
                                _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, \
                                _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, \
                                _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, \
                                _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, \
                                _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, \
                                _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, \
                                _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, \
                                _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, \
                                _93, _94, _95, _96, _97, _98, _99, \
                                COUNT, ... ) COUNT

#define INTERNAL_MPT_IE_GET_COUNT2(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, \
                                _13, _14, _15, _16, _17, _18, _19, _20, _21, _22, \
                                _23, _24, _25, _26, _27, _28, _29, _30, _31, _32, \
                                _33, _34, _35, _36, _37, _38, _39, _40, _41, _42, \
                                _43, _44, _45, _46, _47, _48, _49, _50, _51, _52, \
                                _53, _54, _55, _56, _57, _58, _59, _60, _61, _62, \
                                _63, _64, _65, _66, _67, _68, _69, _70, _71, _72, \
                                _73, _74, _75, _76, _77, _78, _79, _80, _81, _82, \
                                _83, _84, _85, _86, _87, _88, _89, _90, _91, _92, \
                                _93, _94, _95, _96, _97, _98, _99, \
                                COUNT, ... ) COUNT

#define MPT_ARE_ARGS_EMPTY( ... ) \
    INTERNAL_MPT_IE_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_IE_GET_COUNT, \
        ( \
            INTERNAL_MPT_IE_COMPOSE3 \
            ( \
                INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT \
                ( \
                    INTERNAL_MPT_EXPAND_, \
                    INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS __VA_ARGS__ \
                ), \
                () \
            ), \
            EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
        ) \
    )

#define INTERNAL_MPT_ARE_ARGS_EMPTY( ... ) \
    INTERNAL_MPT_IE_DELAYED_COMPOSE2 \
    ( \
        INTERNAL_MPT_IE_GET_COUNT2, \
        ( \
            INTERNAL_MPT_IE_COMPOSE4 \
            ( \
                INTERNAL_MPT_IE_DELAYED_MULTI_CONCAT2 \
                ( \
                    INTERNAL_MPT_EXPAND_, \
                    INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS __VA_ARGS__ \
                ), \
                () \
            ), \
            EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
            NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, NOT_EMPTY, \
        ) \
    )

#endif
