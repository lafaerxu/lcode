cmake_minimum_required(VERSION 3.16)
set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(lcode)

set(CMAKE_CXX_FLAGS "{CMAKE_CXX_FLAGS} -fPIC -Wall -Wextra -Werror -march=native")
set(CMAKE_CXX_FLAGS_DEBUG "{CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb3 -fsanitize=address -fno-omit-frame-pointer -fno-optimize-sibling-calls")

include_directories(include)
include_directories(include/gtest)

add_subdirectory(src)
add_subdirectory(test)


















