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
#include "./AreArgsEmpty.h"
#include "./Miscellaneous.h"

#ifndef INTERNAL_MPT_PREPEND_COMMA_EMPTY
    #define INTERNAL_MPT_PREPEND_COMMA_EMPTY(...)
#endif

#ifndef INTERNAL_MPT_PREPEND_COMMA_NOT_EMPTY
    #define INTERNAL_MPT_PREPEND_COMMA_NOT_EMPTY(...) ,
#endif

#define MPT_PREPEND_APPEND_ARGS( prepend, append, ... ) \
    INTERNAL_MPT_DELAYED_COMPOSE5 \
    ( \
        INTERNAL_MPT_COMPOSE3 \
        ( \
            INTERNAL_MPT_COMPOSE2, \
            ( \
                INTERNAL_MPT_DELAYED_SELECT, \
                ( INTERNAL_MPT_PREPEND_APPEND_ARGS, MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ) \
        ), \
        ( \
            prepend, \
            append \
            INTERNAL_MPT_COMPOSE4 \
            ( \
                MPT_DELAYED_CONCAT3 \
                ( \
                    INTERNAL_MPT_PREPEND_COMMA_, MPT_ARE_ARGS_EMPTY( __VA_ARGS__ ) \
                ), \
                (__VA_ARGS__) \
            ) __VA_ARGS__ \
        ) \
    )


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

    content += "\n#endif\n";

    std::cout << content;
}