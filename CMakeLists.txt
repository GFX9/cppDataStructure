cmake_minimum_required(VERSION 3.16)

project(MySTL)  # 定义项目名称

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -D_GLIBCXX_DEBUG")

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


include_directories(include)

add_subdirectory(tests)

add_executable(
  example
  example.cpp
)