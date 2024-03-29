#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_APPEND_LISTS_ITEMS_H
#define MPT_APPEND_LISTS_ITEMS_H

#include "./Overload.h"
#include "./CountTo.h"


#define MPT_APPEND_LISTS_ITEMS( ... ) \
    INTERNAL_MPT_VA_ARGS_FIX \
    ( \
        INTERNAL_MPT_SELECT, \
        ( INTERNAL_MPT_APPEND_LISTS_ITEMS, MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
    ) (__VA_ARGS__)


#define INTERNAL_MPT_APPEND_LISTS_ITEMS_0()

#define INTERNAL_MPT_APPEND_LISTS_ITEMS_2( a1, b1 ) \
a1 b1

)";
    
    for(int i = 4; i < 100; i += 2)
    {
        content += "#define INTERNAL_MPT_APPEND_LISTS_ITEMS_" + std::to_string(i) + "( ";
        
        int n = i / 2;
        
        //a1, a2, a3, a4, ... aN
        for(int j = 1; j <= n; ++j)
            content += "a" + std::to_string(j) + ", ";
        
        //b1, b2, b3, b4, ... bN
        for(int j = 1; j <= n; ++j)
        {
            content += "b" + std::to_string(j);
            
            if(j != n)
                content += ", ";
        }
        
        content += " ) \\\n";
        
        content +=  "INTERNAL_MPT_APPEND_LISTS_ITEMS_" + std::to_string(i - 2) + "( ";

        //a1, a2, a3, a4, ... aN-1
        for(int j = 1; j <= n - 1; ++j)
            content += "a" + std::to_string(j) + ", ";
        
        //b1, b2, b3, b4, ... bN
        for(int j = 1; j <= n - 1; ++j)
        {
            content += "b" + std::to_string(j);
            
            if(j != n - 1)
                content += ", ";
        }
        
        content += " ), a" + std::to_string(n) + " b" + std::to_string(n) + "\n\n";
    }

    content += "\n#endif";

    std::cout << content;
}