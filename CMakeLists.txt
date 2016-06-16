project(J2534Tool)
cmake_minimum_required(VERSION 2.8)

#note : "advanced" required for dataviewctrl stuff. maybe replacable by something simpler?
find_package(wxWidgets COMPONENTS core base adv REQUIRED)
include(${wxWidgets_USE_FILE})

set(SRC_LIST 
	UI_stuff.cpp J2534main.cpp
	main.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})
target_link_libraries(${PROJECT_NAME} ${wxWidgets_LIBRARIES})
