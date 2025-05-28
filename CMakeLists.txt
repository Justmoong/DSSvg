cmake_minimum_required(VERSION 3.21)
project(DSSvg LANGUAGES CXX)

add_library(DSSvg STATIC
        DSSvgProvider.cpp
        DSSvgImporter.cpp
)
set(CMAKE_PREFIX_PATH "$HOME/Qt-6.8.3-static-install")

target_link_libraries(DSSvg PUBLIC Qt6::Svg Qt6::Quick)
target_include_directories(DSSvg
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)

qt_add_qml_module(DSSvg
        URI DSSvg
        VERSION 1.0
        SOURCES
        DSSvgItem.cpp
        DSSvgItem.h
        DSSvgPlugin.cpp
)