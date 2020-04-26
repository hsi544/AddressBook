cmake_minimum_required(VERSION 3.10)

set(target adbook)

project(${target} LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${target} src/AddressBook.cpp src/Entry.cpp)

add_executable(main main/main.cpp)

target_include_directories(${target} PUBLIC include)

target_link_libraries(main PUBLIC adbook)

enable_testing()
add_subdirectory(ut)

