add_library(
	stack
	stack.cpp
	stack.hpp
	stack_menu.cpp
	stack_menu.hpp
)

target_include_directories(stack PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}")