file(GLOB_RECURSE code_source ${PROJECT_SOURCE_DIR}/ds_src/*.cpp)

add_library(lcode_ds ${code_source})
