add_library(LXSvg STATIC
        LXSvgProvider.cpp
        LXSvgImporter.cpp
)
set(CMAKE_PREFIX_PATH "$HOME/Qt-6.8.3-static-install")

target_link_libraries(LXSvg PUBLIC Qt6::Svg Qt6::Quick)
target_include_directories(LXSvg
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
        $<INSTALL_INTERFACE:include>
)

qt_add_qml_module(LXSvg
        URI LXSvg
        VERSION 1.0
        SOURCES
        LXSvgItem.cpp
        SvgItem.h
        LXSvgPlugin.cpp
)