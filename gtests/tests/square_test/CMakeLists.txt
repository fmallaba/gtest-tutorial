file(GLOB SRC *.cpp)

add_executable(squaretest ${SRC})

target_link_libraries(squaretest libsquare libgtest)

# link pthread library needed for gtest
target_link_libraries(squaretest Threads::Threads)


add_test(NAME squaretest COMMAND squaretest)
