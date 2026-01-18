cmake_minimum_required(VERSION 3.14)

if(TARGET MacroPowerToys)
    return()
endif()

# For Clang to do parsing
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set the project name
project(MacroPowerToys)

set(MACRO_POWER_TOYS_BUILD_TEST "OFF" CACHE BOOL "Build tests for MacroPowerToys")
set(MACRO_POWER_TOYS_BUILD_GENERATORS "OFF" CACHE BOOL "Build headers generators for MacroPowerToys")

add_library(MacroPowerToys INTERFACE)
target_include_directories(MacroPowerToys INTERFACE "${CMAKE_CURRENT_LIST_DIR}")

if (CMAKE_C_COMPILER_ID STREQUAL "MSVC")
    set(MPT_STANDARD_COMPILE_FLAGS "/utf-8;/W1")
else()
    set(MPT_STANDARD_COMPILE_FLAGS  "-Wall"
                                    "-Wno-return-local-addr"
                                    "-Wno-sign-compare"
                                    "-Wno-unused-variable"
                                    "-Wno-unused-parameter"
                                    "-Wno-switch"
                                    "-Wno-gnu-zero-variadic-macro-arguments"
                                    "-Wextra"
                                    "-pedantic"
                                    "-Werror")
endif()

if(MACRO_POWER_TOYS_BUILD_TEST)
    
    file(GLOB C_EXAMPLES "${CMAKE_CURRENT_LIST_DIR}/Examples/*.c")
    foreach(examplePath ${C_EXAMPLES})
        get_filename_component(exampleName "${examplePath}" NAME_WE)
        
        add_executable(${exampleName}C "${examplePath}")
        set_target_properties(  ${exampleName}C PROPERTIES 
                                C_STANDARD 99
                                C_STANDARD_REQUIRED ON)
        target_link_libraries(${exampleName}C PUBLIC MacroPowerToys)
        target_compile_options(${exampleName}C PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    endforeach()

    file(GLOB CPP_EXAMPLES "${CMAKE_CURRENT_LIST_DIR}/Examples/*.cpp")
    foreach(examplePath ${CPP_EXAMPLES})
        get_filename_component(exampleName "${examplePath}" NAME_WE)
        
        add_executable(${exampleName}Cpp "${examplePath}")
        set_target_properties(  ${exampleName}Cpp PROPERTIES 
                                CXX_STANDARD 11
                                CXX_STANDARD_REQUIRED ON)
        target_link_libraries(${exampleName}Cpp PUBLIC MacroPowerToys)
        target_compile_options(${exampleName}Cpp PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    endforeach()
endif()

if(MACRO_POWER_TOYS_BUILD_GENERATORS)
    add_executable(MPTGenerateAppendListsItems "${CMAKE_CURRENT_LIST_DIR}/Generators/GenerateAppendListsItems.cpp")
    target_compile_options(MPTGenerateAppendListsItems PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGenerateConcatListsItems "${CMAKE_CURRENT_LIST_DIR}/Generators/GenerateConcatListsItems.cpp")
    target_compile_options(MPTGenerateConcatListsItems PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGenerateCountTo "${CMAKE_CURRENT_LIST_DIR}/Generators/GenerateCountTo.cpp")
    target_compile_options(MPTGenerateCountTo PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGenerateGetLastArg "${CMAKE_CURRENT_LIST_DIR}/Generators/GenerateGetLastArg.cpp")
    target_compile_options(MPTGenerateGetLastArg PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGeneratePrefixSuffixArgs "${CMAKE_CURRENT_LIST_DIR}/Generators/GeneratePrefixSuffixArgs.cpp")
    target_compile_options(MPTGeneratePrefixSuffixArgs PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGeneratePrependAppendArgs "${CMAKE_CURRENT_LIST_DIR}/Generators/GeneratePrependAppendArgs.cpp")
    target_compile_options(MPTGeneratePrependAppendArgs PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGenerateRemoveParenthesis "${CMAKE_CURRENT_LIST_DIR}/Generators/GenerateRemoveParenthesis.cpp")
    target_compile_options(MPTGenerateRemoveParenthesis PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
    
    add_executable(MPTGenerateSplitList "${CMAKE_CURRENT_LIST_DIR}/Generators/GenerateSplitList.cpp")
    target_compile_options(MPTGenerateSplitList PUBLIC "${MPT_STANDARD_COMPILE_FLAGS}")
endif()

