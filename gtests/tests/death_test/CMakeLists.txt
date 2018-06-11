file(GLOB SRC *.cpp)

add_executable(deathtest ${SRC})

target_link_libraries(deathtest libgtest)

# link pthread library needed for gtest
target_link_libraries(deathtest Threads::Threads)


add_test(NAME deathtest COMMAND deathtest)
