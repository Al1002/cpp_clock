if(WIN32)
add_library(clock STATIC clock_windows.cpp)
else()
add_library(clock STATIC clock.cpp)
endif()
target_include_directories(clock PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}>
    $<INSTALL_INTERFACE:include/clock>
)


if(BUILD_TESTING)
    message("Build testing: ON")
    add_executable(test1 test.cpp)
    target_link_libraries(test1 PRIVATE clock)
    add_test(
        NAME test1
        COMMAND test1
    )
endif()
