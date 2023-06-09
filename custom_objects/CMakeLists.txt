set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS "D:/Users/Tessan/Codes/C++/Qt_vpn_interface/custom_objects")

add_library(custom_objects STATIC
    button_icon.cpp
    overlay.cpp
    thememanager.cpp
)

target_link_libraries(custom_objects PRIVATE Qt6::Widgets)

target_include_directories(custom_objects PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
