set(factorial_SRC
	factorial.cpp
	factorial.hpp)

add_library(libfactorial STATIC ${factorial_SRC})
add_executable(factorial main.cpp ${factorial_SRC})

target_include_directories(libfactorial PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
