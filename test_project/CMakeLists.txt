cmake_minimum_required(VERSION 3.10)
project(ClockTestProject)

# Set C++ Standard
set(CMAKE_CXX_STANDARD 17)

# Find the cpp_clock package
find_package(clock REQUIRED)

# Create executable
add_executable(ClockTestProject main.cpp)

# Link cpp_clock to the executable
target_link_libraries(ClockTestProject PRIVATE clock::clock)

# Include directories for cpp_clock (if required)
target_include_directories(ClockTestProject PRIVATE ${cpp_clock_INCLUDE_DIRS})
