CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)

ADD_EXECUTABLE(test
    unit_test.cpp
    ../lab-08---visitor-pattern-pfala001-akris023-lab8/binary_iterator.cpp
)

ADD_EXECUTABLE(main
    main.cpp
    ../lab-08---visitor-pattern-pfala001-akris023-lab8/binary_iterator.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)
