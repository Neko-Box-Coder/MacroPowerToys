#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_PREPEND_APPEND_ARGS_H
#define MPT_PREPEND_APPEND_ARGS_H

#include "./Overload.h"
#include "./ArgsCount.h"


#define MPT_PREPEND_APPEND_ARGS( prepend, append, ... ) \
    INTERNAL_MPT_VA_ARGS_FIX \
    ( \
        INTERNAL_MPT_SELECT, \
        ( INTERNAL_MPT_PREPEND_APPEND_ARGS, MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
    ) (prepend, append, __VA_ARGS__)


#define INTERNAL_MPT_PREPEND_APPEND_ARGS_0( pre, app )

#define INTERNAL_MPT_PREPEND_APPEND_ARGS_1( pre, app, _1 ) \
pre _1 app

)";
    
    for(int i = 2; i < 100; ++i)
    {
        content += "#define INTERNAL_MPT_PREPEND_APPEND_ARGS_" + std::to_string(i) + "( pre, app, ";
        
        for(int j = 1; j <= i; ++j)
        {
            content += "_" + std::to_string(j);
            
            if(j != i)
                content += ", ";
        }
        
        content += " ) \\\n";
        
        content +=  "INTERNAL_MPT_PREPEND_APPEND_ARGS_" + std::to_string(i - 1) + 
                    "(pre, app, ";

        for(int j = 1; j < i; ++j)
        {
            content += "_" + std::to_string(j);
            
            if(j != i - 1)
                content += ", ";
        }

        content += "), pre _" + std::to_string(i) + " app\n\n";
    }

    content += "\n#endif";

    std::cout << content;
}