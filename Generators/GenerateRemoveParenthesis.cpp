#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_REMOVE_PARAENTHESIS_H
#define MPT_REMOVE_PARAENTHESIS_H

#define INTERNAL_MPT_RPIL_MULTI_CONCAT( A, ... ) A ## __VA_ARGS__
#define INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT_INNER(A, ...) INTERNAL_MPT_RPIL_MULTI_CONCAT(A, __VA_ARGS__)
#define INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT(A, ...) INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT_INNER(A, __VA_ARGS__)

#define INTERNAL_MPT_RPIL_COMPOSE( A, B ) A B
#define INTERNAL_MPT_RPIL_COMPOSE2( A, B ) A B

#define INTERNAL_MPT_RPIL_DELAY( ... ) __VA_ARGS__
#define INTERNAL_MPT_RPIL_DELAYED_COMPOSE_INNER(macro, args) INTERNAL_MPT_RPIL_COMPOSE( macro, args )
#define INTERNAL_MPT_RPIL_DELAYED_COMPOSE(macro, args) INTERNAL_MPT_RPIL_DELAYED_COMPOSE_INNER( macro, INTERNAL_MPT_RPIL_DELAY(args) )

#define INTERNAL_MPT_RPIL_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_RPIL_SELECT( NAME, NUM ) INTERNAL_MPT_RPIL_CONCAT( NAME ## _, NUM )

//----------------------------------
//Get Counts
//----------------------------------

#define INTERNAL_MPT_RPIL_MULTI_CONCAT2( A, ... ) A ## __VA_ARGS__
#define INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT_INNER2(A, ...) INTERNAL_MPT_RPIL_MULTI_CONCAT2(A, __VA_ARGS__)
#define INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT2(A, ...) INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT_INNER2(A, __VA_ARGS__)

#define INTERNAL_MPT_RPIL_COMPOSE3( A, B ) A B
#define INTERNAL_MPT_RPIL_COMPOSE4( A, B ) A B

#define INTERNAL_MPT_RPIL_DELAY3( ... ) __VA_ARGS__
#define INTERNAL_MPT_RPIL_DELAYED_COMPOSE_INNER3(macro, args) INTERNAL_MPT_RPIL_COMPOSE3( macro, args )
#define INTERNAL_MPT_RPIL_DELAYED_COMPOSE3(macro, args) INTERNAL_MPT_RPIL_DELAYED_COMPOSE_INNER3( macro, INTERNAL_MPT_RPIL_DELAY3(args) )

#ifndef INTERNAL_MPT_EXPAND_INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS
    #define INTERNAL_MPT_EXPAND_INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS() \
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
#endif

#ifndef INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS
    #define INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS(...) FIRST_ARG
#endif

#define INTERNAL_MPT_RPIL_GET_COUNT(_0, _1, _2, _3, _4, _5, _6, _7, _8, _9, _10, _11, _12, \
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

#define INTERNAL_MPT_RPIL_ARGS_COUNT( ... ) \
    INTERNAL_MPT_RPIL_DELAYED_COMPOSE3 \
    ( \
        INTERNAL_MPT_RPIL_GET_COUNT, \
        ( \
            INTERNAL_MPT_RPIL_COMPOSE4 \
            ( \
                INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT2 \
                ( \
                    INTERNAL_MPT_EXPAND_, \
                    INTERNAL_MPT_PROTECT_FIRST_ARG_PARENS __VA_ARGS__ \
                ), \
                () \
            ), \
            0, 99, 98, 97, 96, 95, 94, 93, 92, 91, \
            90, 89, 88, 87, 86, 85, 84, 83, 82, 81, \
            80, 79, 78, 77, 76, 75, 74, 73, 72, 71, \
            70, 69, 68, 67, 66, 65, 64, 63, 62, 61, \
            60, 59, 58, 57, 56, 55, 54, 53, 52, 51, \
            50, 49, 48, 47, 46, 45, 44, 43, 42, 41, \
            40, 39, 38, 37, 36, 35, 34, 33, 32, 31, \
            30, 29, 28, 27, 26, 25, 24, 23, 22, 21, \
            20, 19, 18, 17, 16, 15, 14, 13, 12, 11, \
            10, 9, 8, 7, 6, 5, 4, 3, 2, 1 \
        ) \
    )


#define INTERNAL_MPT_REMOVE_PARENTHESIS( ... ) INTERNAL_MPT_REMOVE_PARENTHESIS __VA_ARGS__

#define INTERNAL_MPT_CANCEL_INTERNAL_MPT_REMOVE_PARENTHESIS

#define MPT_REMOVE_PARENTHESIS( ... ) \
    INTERNAL_MPT_RPIL_DELAYED_MULTI_CONCAT(INTERNAL_MPT_CANCEL_, INTERNAL_MPT_REMOVE_PARENTHESIS __VA_ARGS__)

#define MPT_REMOVE_PARENTHESIS_IN_LIST( ... ) \
    INTERNAL_MPT_RPIL_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_RPIL_COMPOSE2 \
        ( \
            INTERNAL_MPT_RPIL_SELECT, \
            ( MPT_REMOVE_PARENTHESIS_IN_LIST, INTERNAL_MPT_RPIL_ARGS_COUNT( __VA_ARGS__ ) ) \
        ), \
        (__VA_ARGS__) \
    )

#define MPT_REMOVE_PARENTHESIS_IN_LIST_0()
#define MPT_REMOVE_PARENTHESIS_IN_LIST_1(arg1) MPT_REMOVE_PARENTHESIS(arg1)
)";
    
    for(int i = 2; i < 100; ++i)
    {
        content += "#define MPT_REMOVE_PARENTHESIS_IN_LIST_" + std::to_string(i) + "(";
        
        for(int j = 1; j <= i; ++j)
        {
            content += "arg" + std::to_string(j);
            
            if(j != i)
                content += ", ";
        }
        
        content += ") ";
        
        for(int j = 1; j <= i; ++j)
        {
            content += "MPT_REMOVE_PARENTHESIS(arg" + std::to_string(j) + ")";
            
            if(j != i)
                content += ", ";
        }
        
        content += "\n";
    }

    content += "\n#endif\n";

    std::cout << content;
}
