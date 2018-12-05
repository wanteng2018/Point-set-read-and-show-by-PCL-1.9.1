project(untitled)
cmake_minimum_required(VERSION 2.8)
set(CMAKE_BUILD_TYPE "DEBUG" )

#pcl 1.9
find_package(PCL REQUIRED)
include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

aux_source_directory(. SRC_LIST)
add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(untitled ${PCL_LIBRARIES})
