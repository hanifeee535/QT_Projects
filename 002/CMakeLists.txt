cmake_minimum_required(VERSION 3.19)
project(002 LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(002
    main.cpp
)

target_link_libraries(002
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 002
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
