cmake_minimum_required(VERSION 3.5)

project(Display)

find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5PrintSupport REQUIRED)

set(PROJECT_SOURCES
    main.cpp
    mainwindow.cpp
    mainwindow.h
    mainwindow.ui
    )

ADD_TARGET(NAME ${PROJECT_NAME}
    ISEXE
    ISWINDOWS
    NO_TRANSLATION
    VERSION ${RabbitRemoteControl_VERSION}
    PRIVATE_INCLUDE_DIRS $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/../../Service/>
    SOURCE_FILES ${PROJECT_SOURCES}
    PRIVATE_LIBS Service ${QT_LIBRARIES}
    )

target_link_libraries(${PROJECT_NAME}
  PRIVATE
    Qt5::Core
    Qt5::Gui
    Qt5::Widgets
    Qt5::PrintSupport
)
