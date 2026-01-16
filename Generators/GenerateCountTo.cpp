#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_COUNT_TO_H
#define MPT_COUNT_TO_H

#include "./Miscellaneous.h"

#define MPT_COUNT_TO(num, prefix, suffix) \
    INTERNAL_MPT_COMPOSE25 \
    ( \
        INTERNAL_MPT_COMPOSE26 \
        ( \
            INTERNAL_MPT_SELECT10, \
            ( MPT_COUNT_TO, num ) \
        ), \
        (prefix, suffix) \
    )

#define MPT_COUNT_TO_MINUS_1(num, prefix, suffix) \
    INTERNAL_MPT_COMPOSE27 \
    ( \
        INTERNAL_MPT_COMPOSE28 \
        ( \
            INTERNAL_MPT_SELECT11, \
            ( INTERNAL_MPT_COUNT_TO_MINUS_1, num ) \
        ), \
        (prefix, suffix) \
    )

#define MPT_COUNT_TO_0(prefix, suffix)
#define MPT_COUNT_TO_0_(prefix, suffix)

#define MPT_REPEAT(num, delimiter, ...) \
    INTERNAL_MPT_COMPOSE29 \
    ( \
        INTERNAL_MPT_COMPOSE30 \
        ( \
            INTERNAL_MPT_SELECT12, \
            ( INTERNAL_MPT_EVAL, num ) \
        ), \
        (delimiter, __VA_ARGS__) \
    )

#define MPT_REPEAT_WITH_COMMA(num, ...) \
    INTERNAL_MPT_COMPOSE31 \
    ( \
        INTERNAL_MPT_COMPOSE32 \
        ( \
            INTERNAL_MPT_SELECT13, \
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
