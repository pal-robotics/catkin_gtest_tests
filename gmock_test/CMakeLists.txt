cmake_minimum_required(VERSION 2.8.3)
project(gmock_test)

find_package(catkin REQUIRED roscpp)


################################################
## Declare ROS dynamic reconfigure parameters ##
################################################

include_directories(SYSTEM ${catkin_INCLUDE_DIRS})
catkin_package()

#############
## Testing ##
#############

## Add gtest based cpp test target and link libraries
message("GTEST_LIBRARIES: ${GTEST_LIBRARIES}")
catkin_add_gtest(${PROJECT_NAME}-test test/gmock_test.cpp)
target_link_libraries(${PROJECT_NAME}-test ${catkin_LIBRARIES})

## Add folders to be run by python nosetests
# catkin_add_nosetests(test)
