file(GLOB SRC *.cpp)

add_executable(VPTesttest ${SRC})

target_link_libraries(VPTesttest libfactorial libgtest)

# link pthread library needed for gtest
target_link_libraries(VPTesttest Threads::Threads)


add_test(NAME VPTesttest COMMAND VPTesttest)
