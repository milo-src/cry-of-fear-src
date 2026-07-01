cmake_minimum_required(VERSION 3.14)
project(library_suffix LANGUAGES C)

add_library(library_suffix STATIC "src/library_suffix.c")
target_include_directories(library_suffix PUBLIC "include")
