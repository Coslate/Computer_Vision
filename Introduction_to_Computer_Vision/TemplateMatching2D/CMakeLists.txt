cmake_minimum_required(VERSION 3.10)

# set the project name and version
project(Image_Read)

# specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# specify header files
set(INCLUDE_DIR ./include)
set(HEADER_FILES ${INCLUDE_DIR}/TemplateMatching2D.h)

# specify the name of the executable
set(EXEC TemplateMatching2D_main)

find_package( OpenCV REQUIRED )
set(SOURCES TemplateMatching2D_main.cpp TemplateMatching2D.cpp ${HEADER_FILES})
add_executable(${EXEC} ${SOURCES})
target_link_libraries(${EXEC} ${OpenCV_LIBS} )
target_include_directories(${EXEC} PRIVATE ${INCLUDE_DIR})
