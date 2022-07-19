cmake_minimum_required (VERSION 2.8)
project(matrix)
aux_source_directory(. srcs)
add_executable(matrix ${srcs})
