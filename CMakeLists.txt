cmake_minimum_required(VERSION 3.10)
project(PayrollSystem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(payroll
    main.cpp
    employee.cpp
    manager.cpp
    engineer.cpp
    intern.cpp
)

target_include_directories(payroll PRIVATE .)
target_compile_options(payroll PRIVATE -Wall -Wextra)

install(TARGETS payroll RUNTIME DESTINATION bin)
