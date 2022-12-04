add_library(
	queue
	queue.cpp
	queue.hpp
	queue_menu.cpp
	queue_menu.hpp
)

target_include_directories(queue PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")