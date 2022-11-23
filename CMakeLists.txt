cmake_minimum_required(VERSION 3.5)

project(Qt_vpn_interface VERSION 0.1 LANGUAGES CXX)

#set(QT_DIR "D:/Qt/6.4.0/mingw_64/lib/cmake/Qt6")
#set(Qt6_DIR "D:/Qt/6.4.0/mingw_64/lib/cmake/Qt6")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS "D:/Users/Tessan/Codes/C++/Qt_vpn_interface/ui_files")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_PREFIX_PATH "D:/Users/Tessan/Qt/6.4.0/mingw_64")
find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Widgets)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Widgets)

set(PROJECT_SOURCES
        main.cpp
        mainwindow.cpp
        sidemenu.cpp
        ressources/ressources.qrc
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/mainwindow.ui
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/sidemenu.ui
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/page_1.ui
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/page_2.ui
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/page_3.ui
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/page_4.ui
        ${CMAKE_AUTOUIC_SEARCH_PATHS}/page_5.ui
)



if(${QT_VERSION_MAJOR} GREATER_EQUAL 6)
    qt_add_executable(Qt_vpn_interface
        MANUAL_FINALIZATION
        ${PROJECT_SOURCES}
    )
# Define target properties for Android with Qt 6 as:
#    set_property(TARGET Qt_vpn_interface APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation
else()
    if(ANDROID)
        add_library(Qt_vpn_interface SHARED
            ${PROJECT_SOURCES}
        )
# Define properties for Android with Qt 5 after find_package() calls as:
#    set(ANDROID_PACKAGE_SOURCE_DIR "${CMAKE_CURRENT_SOURCE_DIR}/android")
    else()
        add_executable(Qt_vpn_interface
            ${PROJECT_SOURCES}
        )
    endif()
endif()

###########################################################################
#################### adding libraries #####################################
###########################################################################

target_link_libraries(Qt_vpn_interface PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)


add_subdirectory(pages)
target_link_libraries(Qt_vpn_interface PUBLIC pages Qt6::Widgets)


add_subdirectory(custom_objects)
target_link_libraries(Qt_vpn_interface PUBLIC custom_objects Qt6::Widgets)


###########################################################################
###########################################################################


set_target_properties(Qt_vpn_interface PROPERTIES
    MACOSX_BUNDLE_GUI_IDENTIFIER my.example.com
    MACOSX_BUNDLE_BUNDLE_VERSION ${PROJECT_VERSION}
    MACOSX_BUNDLE_SHORT_VERSION_STRING ${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}
    MACOSX_BUNDLE TRUE
    WIN32_EXECUTABLE TRUE
)

install(TARGETS Qt_vpn_interface
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(Qt_vpn_interface)
endif()
