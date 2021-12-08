cmake_minimum_required(VERSION 3.16) #设置cmake版本最低版本号
set(CMAKE_C_COMPILER /usr/bin/clang)
set(CMAKE_CXX_COMPILER /usr/bin/clang++) #设置c/c++编译器路径 否则默认使用系统环境变量配置的路径
set(BUILD_SHARED_LIBS OFF)   #设置是否使用动态库
set(CMAKE_CXX_STANDARD 17)   #设置c++的语言标准
set(CMAKE_CXX_STANDARD_REQUIRED ON) #开启语言标准要求
project(lcode)  #设置项目名称

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG        703bd9caab50b139428cea1aaff9974ebee5742e # release-1.10.0
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fPIC -Wall -Wextra -Werror ")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0 -ggdb -fsanitize=address -fno-omit-frame-pointer -fno-optimize-sibling-calls")


include_directories(include)
add_subdirectory(src)
add_subdirectory(test)
add_subdirectory(ds_src)
