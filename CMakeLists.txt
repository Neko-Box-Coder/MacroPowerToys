cmake_minimum_required(VERSION 3.14)

if(TARGET MacroPowerToy)
    return()
endif()

# For Clang to do parsing
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set the project name
project(MacroPowerToy)

set(MACRO_POWER_TOY_BUILD_TEST "OFF" CACHE BOOL "Build tests for MacroPowerToy")

add_library(MacroPowerToy INTERFACE)
target_include_directories(MacroPowerToy INTERFACE "${CMAKE_CURRENT_LIST_DIR}")

if(MACRO_POWER_TOY_BUILD_TEST)
    if (CMAKE_C_COMPILER_ID STREQUAL "MSVC")
        set(STANDARD_COMPILE_FLAGS "/utf-8;/W1;/Zc:preprocessor")
    else()
        set(STANDARD_COMPILE_FLAGS  "-Wall"
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

    add_executable(TestMPT "${CMAKE_CURRENT_LIST_DIR}/TestMPT.c")
    target_link_libraries(TestMPT INTERFACE MacroPowerToy)
    target_compile_options(TestMPT PUBLIC "${STANDARD_COMPILE_FLAGS}")
    
    add_executable(TestMPT_Cpp "${CMAKE_CURRENT_LIST_DIR}/TestMPT.cpp")
    target_link_libraries(TestMPT_Cpp INTERFACE MacroPowerToy)
    target_compile_options(TestMPT_Cpp PUBLIC "${STANDARD_COMPILE_FLAGS}")
endif()

