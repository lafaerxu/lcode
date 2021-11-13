file(GLOB_RECURSE code_source ${PROJECT_SOURCE_DIR}/src/*/*.cpp ${PROJECT_SOURCE_DIR}/src/*.cpp)

add_library(lcode_shared ${code_source})

#construct lib will be added below
