cmake_minimum_required(VERSION 3.16)
project(CppSnake)

set(CMAKE_CXX_STANDARD 17)

set(EXECUTABLE_NAME "CppSnake")
add_executable(
        ${EXECUTABLE_NAME}
        src/main.cpp
)

# Detect and add SFML
set(CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake_modules" ${CMAKE_MODULE_PATH})
include_directories("c:/SFML-2.5.1/include")
target_link_libraries(${EXECUTABLE_NAME} ${SFML_LIBRARIES} ${SFML_DEPENDENCIES})
