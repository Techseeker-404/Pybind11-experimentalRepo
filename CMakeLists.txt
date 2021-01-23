
cmake_minimum_required(VERSION 3.10)

# project name

project(test)
# adding pybind 11
add_subdirectory(thirdparty/pybind11)
#adding eigen header files
include_directories(thirdparty/eigen)

pybind11_add_module(kf_cpp wrappers.cpp)


