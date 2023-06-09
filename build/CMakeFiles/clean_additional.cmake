# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\Qt_vpn_interface_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Qt_vpn_interface_autogen.dir\\ParseCache.txt"
  "Qt_vpn_interface_autogen"
  "custom_objects\\CMakeFiles\\custom_objects_autogen.dir\\AutogenUsed.txt"
  "custom_objects\\CMakeFiles\\custom_objects_autogen.dir\\ParseCache.txt"
  "custom_objects\\custom_objects_autogen"
  "pages\\CMakeFiles\\pages_autogen.dir\\AutogenUsed.txt"
  "pages\\CMakeFiles\\pages_autogen.dir\\ParseCache.txt"
  "pages\\pages_autogen"
  )
endif()
