add_executable(client 
	main.cpp
)

target_include_directories(client PUBLIC 
	"${CMAKE_SOURCE_DIR}/LinkedList"
)
target_link_libraries(client
	"LinkedList"
)