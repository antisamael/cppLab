cmake_minimum_required(VERSION 3.10)
aux_source_directory(. OTN_LIB_SRCS)
add_library(otn ${OTN_LIB_SRCS})

set(CMAKE_BUILD_TYPE "Debug")
set(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g -ggdb")
set(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")