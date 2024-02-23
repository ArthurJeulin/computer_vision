cmake_minimum_required(VERSION 3.16)

set(test_name image_matrix)

find_package(OpenCV REQUIRED)

add_executable(${test_name} ${test_name}.cpp)

target_include_directories(${test_name} PUBLIC  
#  ${PROJECT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(${test_name} PRIVATE 
  ${OpenCV_LIBS} 
)

target_compile_features(${test_name} PRIVATE cxx_std_17)

install(TARGETS ${test_name})


set(test_name manipuling_pixels)


add_executable(${test_name} ${test_name}.cpp)

target_include_directories(${test_name} PUBLIC  
#  ${PROJECT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(${test_name} PRIVATE 
  ${OpenCV_LIBS} 
)

target_compile_features(${test_name} PRIVATE cxx_std_17)

install(TARGETS ${test_name})


set(test_name display_fonctions)


add_executable(${test_name} ${test_name}.cpp)

target_include_directories(${test_name} PUBLIC  
#  ${PROJECT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(${test_name} PRIVATE 
  ${OpenCV_LIBS} 
)

target_compile_features(${test_name} PRIVATE cxx_std_17)

install(TARGETS ${test_name})


set(test_name save_image)


add_executable(${test_name} ${test_name}.cpp)

target_include_directories(${test_name} PUBLIC  
#  ${PROJECT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(${test_name} PRIVATE 
  ${OpenCV_LIBS} 
)

target_compile_features(${test_name} PRIVATE cxx_std_17)

install(TARGETS ${test_name})


set(test_name color_img)


add_executable(${test_name} ${test_name}.cpp)

target_include_directories(${test_name} PUBLIC  
#  ${PROJECT_SOURCE_DIR}/include
  ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(${test_name} PRIVATE 
  ${OpenCV_LIBS} 
)

target_compile_features(${test_name} PRIVATE cxx_std_17)

install(TARGETS ${test_name})