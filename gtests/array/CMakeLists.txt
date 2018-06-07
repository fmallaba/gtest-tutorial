set(array_SRC
	array.cpp
	array.hpp)

add_library(libarray STATIC ${array_SRC})

target_include_directories(libarray PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
