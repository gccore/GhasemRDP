cmake_minimum_required(VERSION 3.20 FATAL_ERROR)
project(GhasemRDP LANGUAGES CXX)

add_subdirectory(RabbitRemoteControl)

set(CMAKE_AUTOMOC on)
set(CMAKE_AUTOUIC on)
set(CMAKE_AUTORCC on)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)

add_executable(${PROJECT_NAME}
  main.cc
)
target_link_libraries(${PROJECT_NAME}
  PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    RabbitRemoteControlApp
)
