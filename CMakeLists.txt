cmake_minimum_required(VERSION 3.15)
project(Bibliography_Management_System)

set(CMAKE_CXX_STANDARD 17)

add_executable(Bibliography_Management_System Medium.cpp Medium.h Book.cpp Book.h Article.cpp Article.h Bibliography.cpp Bibliography.h BibliographyTestDrive.cpp )