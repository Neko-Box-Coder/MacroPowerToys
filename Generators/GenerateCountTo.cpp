#include <iostream>
#include <string>


int main(int argc, char *argv[])
{
    std::string content = 
R"(
#ifndef MPT_COUNT_TO_H
#define MPT_COUNT_TO_H

#include "./Overload.h"

#define MPT_COUNT_TO_0(prefix, suffix)
#define MPT_COUNT_TO_0_(prefix, suffix)

#define MPT_COUNT_TO_1_(prefix, suffix) \
    prefix ## 1 ## suffix

#define MPT_COUNT_TO_1(prefix, suffix) \
    MPT_COUNT_TO_1_(prefix, suffix) \

#define MPT_COUNT_TO_1_MINUS_1(prefix, suffix) \
    MPT_COUNT_TO_0_(prefix, suffix)

)";
    
    for(int i = 2; i < 100; ++i)
    {
        content += "#define MPT_COUNT_TO_" + std::to_string(i) + "_(prefix, suffix) \\\n";
        content +=  "    MPT_COUNT_TO_" + std::to_string(i - 1) + "_(prefix, suffix), " + 
                    "prefix ## "+ std::to_string(i) +" ## suffix\n\n";
        
        content += "#define MPT_COUNT_TO_" + std::to_string(i) + "(prefix, suffix) \\\n";
        content += "    MPT_COUNT_TO_" + std::to_string(i) + "_(prefix, suffix) \n\n";
        
        content += "#define MPT_COUNT_TO_" + std::to_string(i) + "_MINUS_1(prefix, suffix) \\\n";
        content += "    MPT_COUNT_TO_" + std::to_string(i - 1) + "_(prefix, suffix)\n\n";
    }

    content += "\n#endif";

    std::cout << content;
}