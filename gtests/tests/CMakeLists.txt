# configure pthread flag for include pthread
# library needed for gtest
set(THREAD_PREFER_PTHREAD_FLAG ON)

# find pthread package needed for gtest
find_package(Threads REQUIRED)

# specify the path to the folder with gtest
set(GTEST_DIR googletest/googletest)

# add header files of gtest
file(GLOB INC ${GTEST_DIR}/include/*.h)

set(GTEST ${GTEST_DIR}/src/gtest-all.cc ${INC})

# add gtest library
add_library(libgtest STATIC ${GTEST})
include_directories(${GTEST_DIR}/include ${GTEST_DIR})

# add your test folders
add_subdirectory(factorial_test)
add_subdirectory(square_test)
add_subdirectory(death_test)
add_subdirectory(valueParameterizedTests)
