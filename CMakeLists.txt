cmake_minimum_required(VERSION 3.0.0)
project(CppCMakeProject VERSION 0.1.0)

aux_source_directory(${CMAKE_SOURCE_DIR} SRC_FILES)

add_executable(CppCMakeProject ${SRC_FILES})

add_subdirectory(cpp_basic)

include_directories(${CMAKE_SOURCE_DIR}/cpp_basic)

target_link_libraries(
    CppCMakeProject
    cpp_basic
)
