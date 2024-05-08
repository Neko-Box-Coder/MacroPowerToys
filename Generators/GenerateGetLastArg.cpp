#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_GET_LAST_ARG_H
#define MPT_GET_LAST_ARG_H

#include "./Overload.h"
#include "./ArgsCount.h"
#include "./Miscellaneous.h"

#define MPT_GET_LAST_ARG( ... ) \
    INTERNAL_MPT_COMPOSE2 \
    ( \
        INTERNAL_MPT_SELECT, \
        ( INTERNAL_MPT_GET_LAST_ARG, MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
    ) (__VA_ARGS__)


#define INTERNAL_MPT_GET_LAST_ARG_0()

#define INTERNAL_MPT_GET_LAST_ARG_1( _1 ) _1

)";
    
    for(int i = 2; i < 100; ++i)
    {
        content += "#define INTERNAL_MPT_GET_LAST_ARG_" + std::to_string(i) + "( ";
        
        for(int j = 1; j <= i; ++j)
        {
            content += "_" + std::to_string(j);
            
            if(j != i)
                content += ", ";
        }
        
        content += " ) _" + std::to_string(i) + "\n";
    }

    content += "\n#endif\n";

    std::cout << content;
}