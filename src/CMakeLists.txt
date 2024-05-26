add_library(clock clock.cpp)
target_include_directories(clock PUBLIC .)

if(BUILD_TESTING)
    add_executable(test1 test.cpp)
    target_link_libraries(test1 PRIVATE clock)
    add_test(
        NAME test1
        COMMAND test1
    )
endif()
