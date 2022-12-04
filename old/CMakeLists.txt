cmake_minimum_required(VERSION 3.16.3)
project(DataStructures VERSION 1.0.0)

# libraries to be used
add_subdirectory(./src/stack)
add_subdirectory(./src/queue)
add_subdirectory(./src/linked_list/dynamic_stack)
add_subdirectory(./src/menu)

# executable
add_executable(data_structures ./src/main.cpp)

target_link_libraries(
	data_structures
	PRIVATE
	# generated binaries to link to main executable(data_structures)
	menu
	stack
	queue
	dynamic_stack
)

target_include_directories(data_structures PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
