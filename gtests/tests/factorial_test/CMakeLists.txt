file(GLOB SRC *.cpp)

add_executable(factorialtest ${SRC})

target_link_libraries(factorialtest libfactorial libgtest)

# link pthread library needed for gtest
target_link_libraries(factorialtest Threads::Threads)


add_test(NAME factorialtest COMMAND factorialtest)
