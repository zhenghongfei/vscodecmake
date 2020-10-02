project(cpp_std11)
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CPP_STD11_SRC_FILES)
add_library(cpp_std11 STATIC ${CPP_STD11_SRC_FILES})