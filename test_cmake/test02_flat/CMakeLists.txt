cmake_minimum_required(VERSION 2.8)
project(test02)
aux_source_directory(. DIR_SRCS)
add_executable(test02 ${DIR_SRCS})