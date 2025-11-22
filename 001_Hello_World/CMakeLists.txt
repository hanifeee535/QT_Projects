cmake_minimum_required(VERSION 3.19)
project(001_Hello_World LANGUAGES CXX)

find_package(Qt6 6.5 REQUIRED COMPONENTS Core)

qt_standard_project_setup()

qt_add_executable(001_Hello_World
    main.cpp
)

target_link_libraries(001_Hello_World
    PRIVATE
        Qt::Core
)

include(GNUInstallDirs)

install(TARGETS 001_Hello_World
    BUNDLE  DESTINATION .
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)
