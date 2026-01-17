#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_REMOVE_PARAENTHESIS_H
#define MPT_REMOVE_PARAENTHESIS_H

#include "./ArgsCount.h"

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
