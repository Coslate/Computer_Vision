cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Image_Read)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)


find_package( OpenCV REQUIRED )
add_executable( Image_Read_main Image_Read_main.cpp )
target_link_libraries( Image_Read_main ${OpenCV_LIBS} )
