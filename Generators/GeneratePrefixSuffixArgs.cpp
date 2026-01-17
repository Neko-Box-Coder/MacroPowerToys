#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_PREFIX_SUFFIX_ARGS_H
#define MPT_PREFIX_SUFFIX_ARGS_H

#include "./ArgsCount.h"
#include "./AreArgsEmpty.h"

#define INTERNAL_MPT_PSA_COMPOSE( A, B ) A B
#define INTERNAL_MPT_PSA_COMPOSE2( A, B ) A B
#define INTERNAL_MPT_PSA_COMPOSE3( A, B ) A B
#define INTERNAL_MPT_PSA_COMPOSE4( A, B ) A B

#define INTERNAL_MPT_PSA_DELAY( ... ) __VA_ARGS__
#define INTERNAL_MPT_PSA_DELAYED_COMPOSE_INNER(macro, args) INTERNAL_MPT_PSA_COMPOSE( macro, args )
#define INTERNAL_MPT_PSA_DELAYED_COMPOSE(macro, args) INTERNAL_MPT_PSA_DELAYED_COMPOSE_INNER( macro, INTERNAL_MPT_PSA_DELAY(args) )

#define INTERNAL_MPT_PSA_CONCAT( A, B ) A ## B
#define INTERNAL_MPT_PSA_SELECT( NAME, NUM ) INTERNAL_MPT_PSA_CONCAT( NAME ## _, NUM )
#define INTERNAL_MPT_PSA_DELAYED_SELECT_INNER( NAME, NUM ) INTERNAL_MPT_PSA_SELECT( NAME, NUM )
#define INTERNAL_MPT_PSA_DELAYED_SELECT( NAME, NUM ) INTERNAL_MPT_PSA_DELAYED_SELECT_INNER( NAME, NUM )

#define INTERNAL_MPT_PSA_CONCAT2( A, B ) A ## B
#define INTERNAL_MPT_PSA_DELAYED_CONCAT2_INNER(A, B) INTERNAL_MPT_PSA_CONCAT2(A, B)
#define INTERNAL_MPT_PSA_DELAYED_CONCAT2(A, B) INTERNAL_MPT_PSA_DELAYED_CONCAT2_INNER(A, B)

#ifndef INTERNAL_MPT_PREPEND_COMMA_EMPTY
    #define INTERNAL_MPT_PREPEND_COMMA_EMPTY(...)
#endif

#ifndef INTERNAL_MPT_PREPEND_COMMA_NOT_EMPTY
    #define INTERNAL_MPT_PREPEND_COMMA_NOT_EMPTY(...) ,
#endif

#define MPT_PREFIX_SUFFIX_ARGS( prefix, suffix, ... ) \
    INTERNAL_MPT_PSA_DELAYED_COMPOSE \
    ( \
        INTERNAL_MPT_PSA_COMPOSE2 \
        ( \
            INTERNAL_MPT_PSA_COMPOSE3, \
            ( \
                INTERNAL_MPT_PSA_DELAYED_SELECT, \
                ( INTERNAL_MPT_PREFIX_SUFFIX_ARGS, INTERNAL_MPT_ARGS_COUNT( __VA_ARGS__ ) ) \
            ) \
        ), \
        ( \
            prefix, \
            suffix \
            INTERNAL_MPT_PSA_COMPOSE4 \
            ( \
                INTERNAL_MPT_PSA_DELAYED_CONCAT2 \
                ( \
                    INTERNAL_MPT_PREPEND_COMMA_, INTERNAL_MPT_ARE_ARGS_EMPTY( __VA_ARGS__ ) \
                ), \
                (__VA_ARGS__) \
            ) __VA_ARGS__ \
        ) \
    )


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

    content += "\n#endif\n";

    std::cout << content;
}
