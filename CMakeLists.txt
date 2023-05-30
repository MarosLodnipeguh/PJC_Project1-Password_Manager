cmake_minimum_required(VERSION 3.24)
project(PJC_Project_1___Password_Manager)

set(CMAKE_CXX_STANDARD 20)

add_executable(PJC_Project_1___Password_Manager cpp/main.cpp cpp/PasswordManager.cpp Headers/PasswordManager.h cpp/PasswordEntry.cpp Headers/PasswordEntry.h cpp/FileHandler.cpp Headers/FileHandler.h)
