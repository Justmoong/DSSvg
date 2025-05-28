add_library(SvgProvider STATIC
        SvgProvider.cpp
        SvgImporter.cpp
)
set(CMAKE_PREFIX_PATH "$HOME/Qt-6.8.3-static-install")

target_link_libraries(SvgProvider PUBLIC Qt6::Svg Qt6::Quick)
target_include_directories(SvgProvider PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})