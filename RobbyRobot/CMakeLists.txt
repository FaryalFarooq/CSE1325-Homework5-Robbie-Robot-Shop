cmake_minimum_required(VERSION 3.6)
project(RobbyRobot)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ComponetType.h RobotPart.h battery.h arm.h locomotor.h std_lib_facilities.h head.h torso.h arm.cpp torso.cpp RobotPart.cpp RobotModel.cpp RobotModel.h view.cpp view.h shop.cpp shop.h controller.cpp controller.h)
add_executable(RobbyRobot ${SOURCE_FILES})