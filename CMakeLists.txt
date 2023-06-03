# CMakeLists
cmake_minimum_required(VERSION 3.0)
project(HELLOWORLD VERSION 1.0 LANGUAGES C CXX)
set(SOURCES ${PROJECT_SOURCE_DIR}/code/src/main.c ${PROJECT_SOURCE_DIR}/code/src/PidInterface.c)
include_directories(${PROJECT_SOURCE_DIR}/code/include)
add_executable(hello ${SOURCES})
