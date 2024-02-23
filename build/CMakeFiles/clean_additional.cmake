# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "week_1/CMakeFiles/color_img_autogen.dir/AutogenUsed.txt"
  "week_1/CMakeFiles/color_img_autogen.dir/ParseCache.txt"
  "week_1/CMakeFiles/display_fonctions_autogen.dir/AutogenUsed.txt"
  "week_1/CMakeFiles/display_fonctions_autogen.dir/ParseCache.txt"
  "week_1/CMakeFiles/image_matrix_autogen.dir/AutogenUsed.txt"
  "week_1/CMakeFiles/image_matrix_autogen.dir/ParseCache.txt"
  "week_1/CMakeFiles/manipuling_pixels_autogen.dir/AutogenUsed.txt"
  "week_1/CMakeFiles/manipuling_pixels_autogen.dir/ParseCache.txt"
  "week_1/CMakeFiles/save_image_autogen.dir/AutogenUsed.txt"
  "week_1/CMakeFiles/save_image_autogen.dir/ParseCache.txt"
  "week_1/color_img_autogen"
  "week_1/display_fonctions_autogen"
  "week_1/image_matrix_autogen"
  "week_1/manipuling_pixels_autogen"
  "week_1/save_image_autogen"
  )
endif()
