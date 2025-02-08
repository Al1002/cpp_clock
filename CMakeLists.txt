cmake_minimum_required(VERSION 3.20)

project(cpp_clock VERSION 1.3)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)

add_subdirectory(src)

include(cmake/install_script.cmake)
include(cmake/cpack_script.cmake)