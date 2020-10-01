project(cpp_basic)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CPP_BASIC_SRC_FILES)
add_library(cpp_basic STATIC ${CPP_BASIC_SRC_FILES})