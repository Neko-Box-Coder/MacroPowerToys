#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_APPEND_LISTS_ITEMS_H
#define MPT_APPEND_LISTS_ITEMS_H

#include "./ArgsCount.h"

#define INTERNAL_MPT_ALI_COMPOSE( A, B ) A B
#define INTERNAL_MPT_ALI_COMPOSE2( A, B ) A B
#define INTERNAL_MPT_ALI_DELAY( ... ) __VA_ARGS__
#define INTERNAL_MPT_ALI_DELAYED_COMPOSE_INNER(macro, args) INTERNAL_MPT_ALI_COMPOSE( macro, args )
#define INTERNAL_MPT_ALI_DELAYED_COMPOSE(macro, args) INTERNAL_MPT_ALI_DELAYED_COMPOSE_INNER( macro, INTERNAL_MPT_ALI_DELAY(args) )

#define INTERNAL_MPT_ALI_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_ALI_SELECT( NAME, NUM ) INTERNAL_MPT_ALI_CONCAT( NAME ## _, NUM )

#define MPT_APPEND_LISTS_ITEMS( ... ) \
    INTERNAL_MPT_ALI_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_ALI_COMPOSE2 \
        ( \
            INTERNAL_MPT_ALI_SELECT, \
            ( INTERNAL_MPT_APPEND_LISTS_ITEMS, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
        ), \
        (__VA_ARGS__) \
    )


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

    content += "\n#endif\n";

    std::cout << content;
}
