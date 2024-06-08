#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_REMOVE_PARAENTHESIS_H
#define MPT_REMOVE_PARAENTHESIS_H

#include "./ArgsCount.h"
#include "./Miscellaneous.h"
#include "./Overload.h"

#define INTERNAL_MPT_REMOVE_PARENTHESIS( ... ) INTERNAL_MPT_REMOVE_PARENTHESIS __VA_ARGS__

#define INTERNAL_MPT_CANCEL_INTERNAL_MPT_REMOVE_PARENTHESIS

#define INTERNAL_MPT_DELAYED_MULTI_CONCAT( A, ... ) INTERNAL_MPT_COMPOSE3(INTERNAL_MPT_MULTI_CONCAT_INNER, (A, __VA_ARGS__))

#define MPT_REMOVE_PARENTHESIS( ... ) \
    INTERNAL_MPT_DELAYED_MULTI_CONCAT(INTERNAL_MPT_CANCEL_, INTERNAL_MPT_REMOVE_PARENTHESIS __VA_ARGS__)

#define MPT_REMOVE_PARENTHESIS_IN_LIST( ... ) \
    INTERNAL_MPT_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_COMPOSE2 \
        ( \
            INTERNAL_MPT_SELECT, \
            ( MPT_REMOVE_PARENTHESIS_IN_LIST, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
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
