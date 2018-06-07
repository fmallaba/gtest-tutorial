file(GLOB SRC *.cpp)

add_executable(arraytest ${SRC})

target_link_libraries(arraytest libarray libgtest)

# link pthread library needed for gtest
target_link_libraries(arraytest Threads::Threads)


add_test(NAME arraytest COMMAND arraytest)
