cmake_minimum_required(VERSION 3.8)

project("maths")

# Add the `cmake` folder so the FindSphinx module is found
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

# Enable unit testing
enable_testing()

add_subdirectory("src")
add_subdirectory("docsgen")
add_subdirectory("tests")