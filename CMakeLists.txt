cmake_minimum_required(VERSION 3.5.0)
project(spicetests VERSION 0.1.0 LANGUAGES C CXX)

add_executable(spicetests main.cpp spice___linker__.cc spice_Spice.cc)

# 链接spicy库
target_link_libraries(spicetests PRIVATE spicy hilti)
