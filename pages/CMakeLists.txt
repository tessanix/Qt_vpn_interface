set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOUIC_SEARCH_PATHS "D:/Users/Tessan/Codes/C++/Qt_vpn_interface/ui_files")
add_library(pages STATIC
    page_1.cpp
    page_2.cpp
    page_3.cpp
    page_4.cpp
    page_5.cpp
)

target_link_libraries(pages PRIVATE Qt6::Widgets)

target_include_directories(pages PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


#target_link_libraries(custom_objects PRIVATE Qt6::Widgets)

#target_include_directories("../custom_objects" PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})


############################################################################
##################### adding libraries #####################################
############################################################################

#target_link_libraries(Qt_vpn_interface PRIVATE Qt${QT_VERSION_MAJOR}::Widgets)


#add_subdirectory(pages)
#target_link_libraries(Qt_vpn_interface PUBLIC pages Qt6::Widgets)



############################################################################
############################################################################
