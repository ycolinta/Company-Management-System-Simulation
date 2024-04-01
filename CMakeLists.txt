cmake_minimum_required(VERSION 3.27)
project(M2OEP_ycolinta)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(M2OEP_ycolinta
        Employee.cpp
        Employee.h
        main.cpp
        PartTime.h
        PartTime.cpp
        Training.h
        Company.cpp
        Company.h
        Training.cpp
        Input_Validation.h
        FullTime.h
        FullTime.cpp
        Testing.cpp)
