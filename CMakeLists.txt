cmake_minimum_required(VERSION 3.22)
project(RayTracer)

set(CMAKE_CXX_STANDARD 20)

add_executable(RayTracer src/Main.cpp src/Vec3.cpp src/Vec3.hpp)
