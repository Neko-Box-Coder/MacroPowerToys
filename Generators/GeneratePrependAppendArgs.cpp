#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_PREPEND_APPEND_ARGS_H
#define MPT_PREPEND_APPEND_ARGS_H

#include "./ArgsCount.h"
#include "./AreArgsEmpty.h"

#define INTERNAL_MPT_PPA_COMPOSE( A, B ) A B
#define INTERNAL_MPT_PPA_COMPOSE2( A, B ) A B
#define INTERNAL_MPT_PPA_COMPOSE3( A, B ) A B
#define INTERNAL_MPT_PPA_COMPOSE4( A, B ) A B

#define INTERNAL_MPT_PPA_DELAY( ... ) __VA_ARGS__
#define INTERNAL_MPT_PPA_DELAYED_COMPOSE_INNER(macro, args) INTERNAL_MPT_PPA_COMPOSE( macro, args )
#define INTERNAL_MPT_PPA_DELAYED_COMPOSE(macro, args) INTERNAL_MPT_PPA_DELAYED_COMPOSE_INNER( macro, INTERNAL_MPT_PPA_DELAY(args) )

#define INTERNAL_MPT_PPA_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_PPA_SELECT( NAME, NUM ) INTERNAL_MPT_PPA_CONCAT( NAME ## _, NUM )
#define INTERNAL_MPT_PPA_DELAYED_SELECT_INNER( NAME, NUM ) INTERNAL_MPT_PPA_SELECT( NAME, NUM )
#define INTERNAL_MPT_PPA_DELAYED_SELECT( NAME, NUM ) INTERNAL_MPT_PPA_DELAYED_SELECT_INNER( NAME, NUM )

#define INTERNAL_MPT_PPA_CONCAT2( A, B ) A ## B
#define INTERNAL_MPT_PPA_DELAYED_CONCAT2_INNER(A, B) INTERNAL_MPT_PPA_CONCAT2(A, B)
#define INTERNAL_MPT_PPA_DELAYED_CONCAT2(A, B) INTERNAL_MPT_PPA_DELAYED_CONCAT2_INNER(A, B)


#ifndef INTERNAL_MPT_PREPEND_COMMA_EMPTY
    #define INTERNAL_MPT_PREPEND_COMMA_EMPTY(...)
#endif

#ifndef INTERNAL_MPT_PREPEND_COMMA_NOT_EMPTY
    #define INTERNAL_MPT_PREPEND_COMMA_NOT_EMPTY(...) ,
#endif

#define MPT_PREPEND_APPEND_ARGS( prepend, append, ... ) \
    INTERNAL_MPT_PPA_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_PPA_COMPOSE2 \
        ( \
            INTERNAL_MPT_PPA_COMPOSE3, \
            ( \
                INTERNAL_MPT_PPA_DELAYED_SELECT, \
                ( INTERNAL_MPT_PREPEND_APPEND_ARGS, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ) \
        ), \
        ( \
            prepend, \
            append \
            INTERNAL_MPT_PPA_COMPOSE4 \
            ( \
                INTERNAL_MPT_PPA_DELAYED_CONCAT2 \
                ( \
                    INTERNAL_MPT_PREPEND_COMMA_, INTERNAL_MPT_ARE_ARGS_EMPTY( __VA_ARGS__ ) \
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
