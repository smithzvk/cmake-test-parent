cmake_minimum_required (VERSION 3.1)

project(add-cli)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

add_subdirectory(cmake-test-middle)

add_executable(add-cli add-cli.c)

target_include_directories(add-cli
  PUBLIC
  cmake-test-middle)

target_link_libraries(add-cli arith)
