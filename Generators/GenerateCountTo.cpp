#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_COUNT_TO_H
#define MPT_COUNT_TO_H

#define INTERNAL_MPT_CT_COMPOSE( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE2( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE3( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE4( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE5( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE6( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE7( A, B ) A B
#define INTERNAL_MPT_CT_COMPOSE8( A, B ) A B

#define INTERNAL_MPT_CT_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_CT_SELECT( NAME, NUM ) INTERNAL_MPT_CT_CONCAT( NAME ## _, NUM )

#define INTERNAL_MPT_CT_CONCAT2( A, B ) A ## B
#define INTERNAL_MPT_CT_SELECT2( NAME, NUM ) INTERNAL_MPT_CT_CONCAT2( NAME ## _, NUM )

#define INTERNAL_MPT_CT_CONCAT3( A, B ) A ## B
#define INTERNAL_MPT_CT_SELECT3( NAME, NUM ) INTERNAL_MPT_CT_CONCAT3( NAME ## _, NUM )

#define INTERNAL_MPT_CT_CONCAT4( A, B ) A ## B
#define INTERNAL_MPT_CT_SELECT4( NAME, NUM ) INTERNAL_MPT_CT_CONCAT4( NAME ## _, NUM )

#define MPT_COUNT_TO(num, prefix, suffix) \
    INTERNAL_MPT_CT_COMPOSE \
    ( \
        INTERNAL_MPT_CT_COMPOSE2 \
        ( \
            INTERNAL_MPT_CT_SELECT, \
            ( MPT_COUNT_TO, num ) \
        ), \
        (prefix, suffix) \
    )

#define MPT_COUNT_TO_MINUS_1(num, prefix, suffix) \
    INTERNAL_MPT_CT_COMPOSE3 \
    ( \
        INTERNAL_MPT_CT_COMPOSE4 \
        ( \
            INTERNAL_MPT_CT_SELECT2, \
            ( INTERNAL_MPT_COUNT_TO_MINUS_1, num ) \
        ), \
        (prefix, suffix) \
    )

#define MPT_COUNT_TO_0(prefix, suffix)
#define MPT_COUNT_TO_0_(prefix, suffix)

#define MPT_REPEAT(num, delimiter, ...) \
    INTERNAL_MPT_CT_COMPOSE5 \
    ( \
        INTERNAL_MPT_CT_COMPOSE6 \
        ( \
            INTERNAL_MPT_CT_SELECT3, \
            ( INTERNAL_MPT_EVAL, num ) \
        ), \
        (delimiter, __VA_ARGS__) \
    )

#define MPT_REPEAT_WITH_COMMA(num, ...) \
    INTERNAL_MPT_CT_COMPOSE7 \
    ( \
        INTERNAL_MPT_CT_COMPOSE8 \
        ( \
            INTERNAL_MPT_CT_SELECT4, \
            ( INTERNAL_MPT_EVAL_WITH_COMMA, num ) \
        ), \
        (__VA_ARGS__) \
    )

#define MPT_COUNT_TO_1_(prefix, suffix) \
    prefix ## 1 ## suffix

#define MPT_COUNT_TO_1(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix) \

#define MPT_COUNT_TO_1_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_0_(prefix, suffix)

#define INTERNAL_MPT_COUNT_TO_MINUS_1_1(prefix, suffix) \
    MPT_COUNT_TO_0_(prefix, suffix)

#define INTERNAL_MPT_EVAL_1(delimiter, ...) __VA_ARGS__
#define INTERNAL_MPT_EVAL_WITH_COMMA_1(...) __VA_ARGS__

)";
    
    for(int i = 2; i < 100; ++i)
    {
        content += "#define MPT_COUNT_TO_" + std::to_string(i) + "_(prefix, suffix) \\\n";
        content +=  "    MPT_COUNT_TO_" + std::to_string(i - 1) + "_(prefix, suffix), " + 
                    "prefix ## "+ std::to_string(i) +" ## suffix\n\n";
        
        content += "#define MPT_COUNT_TO_" + std::to_string(i) + "(prefix, suffix) \\\n";
        content += "    MPT_COUNT_TO_" + std::to_string(i) + "_(prefix, suffix) \n\n";
        
        content += "#define MPT_COUNT_TO_" + std::to_string(i) + "_MINUS_1(prefix, suffix) \\\n";
        content += "    MPT_COUNT_TO_" + std::to_string(i - 1) + "_(prefix, suffix)\n\n";
        
        content += "#define INTERNAL_MPT_COUNT_TO_MINUS_1_" + std::to_string(i) + "(prefix, suffix) \\\n";
        content += "    MPT_COUNT_TO_" + std::to_string(i - 1) + "_(prefix, suffix)\n\n";
        
        content += "#define INTERNAL_MPT_EVAL_" + std::to_string(i) + "(delimiter, ...) \\\n";
        content += "    INTERNAL_MPT_EVAL_" + std::to_string(i - 1) + "(delimiter, __VA_ARGS__) delimiter __VA_ARGS__\n\n";
        
        content += "#define INTERNAL_MPT_EVAL_WITH_COMMA_" + std::to_string(i) + "(...) \\\n";
        content += "    INTERNAL_MPT_EVAL_WITH_COMMA_" + std::to_string(i - 1) + "(__VA_ARGS__), __VA_ARGS__\n\n";
    }

    content += "\n#endif\n";

    std::cout << content;
}
