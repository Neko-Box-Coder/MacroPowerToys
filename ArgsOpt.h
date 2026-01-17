#ifndef MPT_ARGS_OPT_H
#define MPT_ARGS_OPT_H

//----------------------------------
//Are Args Empty
//----------------------------------

#define INTERNAL_MPT_AO_COMPOSE( A, B ) A B
#define INTERNAL_MPT_AO_COMPOSE2( A, B ) A B

#define INTERNAL_MPT_AO_DELAY( ... ) __VA_ARGS__
#define INTERNAL_MPT_AO_DELAYED_COMPOSE_INNER(macro, args) INTERNAL_MPT_AO_COMPOSE( macro, args )
#define INTERNAL_MPT_AO_DELAYED_COMPOSE(macro, args) INTERNAL_MPT_AO_DELAYED_COMPOSE_INNER( macro, INTERNAL_MPT_AO_DELAY(args) )

#define INTERNAL_MPT_AO_MULTI_CONCAT( A, ... ) A ## __VA_ARGS__
#define INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT_INNER(A, ...) INTERNAL_MPT_AO_MULTI_CONCAT(A, __VA_ARGS__)
#define INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT(A, ...) INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT_INNER(A, __VA_ARGS__)

#define INTERNAL_MPT_AO_GET_COUNT(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, \
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

#define INTERNAL_MPT_AO_EXPAND_INTERNAL_MPT_AO_PROTECT_FIRST_ARG_PARENS() \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,, \
                                ,,,,,,,,,

#define INTERNAL_MPT_AO_PROTECT_FIRST_ARG_PARENS(...) FIRST_ARG

#define INTERNAL_MPT_AO_ARE_ARGS_EMPTY( ... ) \
    INTERNAL_MPT_AO_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_AO_GET_COUNT, \
        ( \
            INTERNAL_MPT_AO_COMPOSE2 \
            ( \
                INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT \
                ( \
                    INTERNAL_MPT_AO_EXPAND_, \
                    INTERNAL_MPT_AO_PROTECT_FIRST_ARG_PARENS __VA_ARGS__ \
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

#define INTERNAL_MPT_AO_ARGS_EMPTY( ... )
#define INTERNAL_MPT_AO_ARGS_NOT_EMPTY( ... ) __VA_ARGS__



//----------------------------------
//Remove paraenthesis
//----------------------------------

#define INTERNAL_MPT_AO_MULTI_CONCAT2( A, ... ) A ## __VA_ARGS__
#define INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT_INNER2(A, ...) INTERNAL_MPT_AO_MULTI_CONCAT2(A, __VA_ARGS__)
#define INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT2(A, ...) INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT_INNER2(A, __VA_ARGS__)

#define INTERNAL_MPT_AO_REMOVE_PARENTHESIS_INNER( ... ) INTERNAL_MPT_AO_REMOVE_PARENTHESIS_INNER __VA_ARGS__
#define INTERNAL_MPT_AO_CANCEL_INTERNAL_MPT_AO_REMOVE_PARENTHESIS_INNER

#define INTERNAL_MPT_AO_REMOVE_PARENTHESIS( ... ) \
    INTERNAL_MPT_AO_DELAYED_MULTI_CONCAT2(INTERNAL_MPT_AO_CANCEL_, INTERNAL_MPT_AO_REMOVE_PARENTHESIS_INNER __VA_ARGS__)





#define INTERNAL_MPT_AO_COMPOSE3( A, B ) A B

#define INTERNAL_MPT_AO_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_AO_DELAYED_CONCAT_INNER( A, B ) INTERNAL_MPT_AO_CONCAT( A, B )
#define INTERNAL_MPT_AO_DELAYED_CONCAT( A, B ) INTERNAL_MPT_AO_DELAYED_CONCAT_INNER( A, B )

#define INTERNAL_MPT_AO_DELAY3( ... ) __VA_ARGS__
#define INTERNAL_MPT_AO_DELAYED_COMPOSE_INNER3(macro, args) INTERNAL_MPT_AO_COMPOSE3( macro, args )
#define INTERNAL_MPT_AO_DELAYED_COMPOSE3(macro, args) INTERNAL_MPT_AO_DELAYED_COMPOSE_INNER3( macro, INTERNAL_MPT_AO_DELAY3(args) )

#define MPT_ARGS_OPT( args, nonEmptyExpand ) \
    INTERNAL_MPT_AO_DELAYED_COMPOSE3 \
    ( \
        INTERNAL_MPT_AO_DELAYED_CONCAT \
        ( \
            INTERNAL_MPT_AO_ARGS_, \
            INTERNAL_MPT_AO_ARE_ARGS_EMPTY( INTERNAL_MPT_AO_REMOVE_PARENTHESIS(args) ) \
        ), \
        ( INTERNAL_MPT_AO_REMOVE_PARENTHESIS(nonEmptyExpand) ) \
    )



#endif
