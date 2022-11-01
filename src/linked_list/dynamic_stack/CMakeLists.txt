add_library(
	dynamic_stack
	dynamic_stack_menu.cpp
	dynamic_stack_menu.hpp
	dynamic_stack.cpp
	dynamic_stack.hpp
)

target_include_directories(dynamic_stack PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")