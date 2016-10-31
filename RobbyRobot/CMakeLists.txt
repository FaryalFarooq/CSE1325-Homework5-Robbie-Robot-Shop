add_custom_target(myinstall COMMAND ${CMAKE_MAKE_PROGRAM} install)

cmake_minimum_required(VERSION 3.6)
project(RobbyRobot)

INCLUDE_DIRECTORIES(/usr/local/include)
LINK_DIRECTORIES(/usr/local/lib)

set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -framework Cocoa")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp ComponetType.h RobotPart.h battery.h arm.h locomotor.h std_lib_facilities.h head.h torso.h arm.cpp torso.cpp RobotPart.cpp RobotModel.h view.cpp view.h shop.cpp shop.h controller.cpp controller.h customer.cpp customer.h salesAssoc.cpp salesAssoc.h Order.cpp Order.h RobotModel.cpp)

add_executable(RobbyRobot ${SOURCE_FILES})
TARGET_LINK_LIBRARIES(RobbyRobot fltk)