cmake_minimum_required(VERSION 3.26)
project(playListNode)

set(CMAKE_CXX_STANDARD 17)

add_executable(playListNode main.cpp
        PlaylistNode.cpp
        PlaylistNode.h
        newCxxTest.h)
