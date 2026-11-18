
cmake_minimum_required(VERSION 3.20)

project(Matchcpp LANGUAGES CXX)

add_library(matchcpp INTERFACE)

target_include_directories(matchcpp INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/include)

target_compile_features(matchcpp INTERFACE cxx_std_11)

install(DIRECTORY include/ DESTINATION include)
