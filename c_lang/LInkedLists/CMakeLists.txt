cmake_minimum_required(VERSION 3.16)

project(exec)

set(CMAKE_C_STANDARD 99)

add_executable(exec src/main.c src/list.c)

target_include_directories(exec PRIVATE ${CMAKE_CURRENT_LIST_DIR}/include)