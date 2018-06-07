set(square_SRC
	square.cpp
	square.hpp)

add_library(libsquare STATIC ${square_SRC})

target_include_directories(libsquare PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
