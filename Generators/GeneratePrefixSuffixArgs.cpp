#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_PREFIX_SUFFIX_ARGS_H
#define MPT_PREFIX_SUFFIX_ARGS_H

#include "./Overload.h"
#include "./ArgsCount.h"


#define MPT_PREFIX_SUFFIX_ARGS( prefix, suffix, ... ) \
    INTERNAL_MPT_VA_ARGS_FIX \
    ( \
        INTERNAL_MPT_SELECT, \
        ( INTERNAL_MPT_PREFIX_SUFFIX_ARGS, MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
    ) (prefix, suffix, __VA_ARGS__)


#define INTERNAL_MPT_PREFIX_SUFFIX_ARGS_0( pre, suf )

#define INTERNAL_MPT_PREFIX_SUFFIX_ARGS_1( pre, suf, _1 ) \
pre ## _1 ## suf

)";
    
    for(int i = 2; i < 100; ++i)
    {
        content += "#define INTERNAL_MPT_PREFIX_SUFFIX_ARGS_" + std::to_string(i) + "( pre, suf, ";
        
        for(int j = 1; j <= i; ++j)
        {
            content += "_" + std::to_string(j);
            
            if(j != i)
                content += ", ";
        }
        
        content += " ) \\\n";
        
        content +=  "INTERNAL_MPT_PREFIX_SUFFIX_ARGS_" + std::to_string(i - 1) + 
                    "(pre, suf, ";

        for(int j = 1; j < i; ++j)
        {
            content += "_" + std::to_string(j);
            
            if(j != i - 1)
                content += ", ";
        }

        content += "), pre ## _" + std::to_string(i) + " ## suf\n\n";
    }

    content += "\n#endif";

    std::cout << content;
}