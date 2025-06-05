install(TARGETS clock
    EXPORT clockTargets
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

install(DIRECTORY ${CMAKE_SOURCE_DIR}/src/
    DESTINATION include/clock
    FILES_MATCHING PATTERN "*.h*"
)

install(EXPORT clockTargets
    FILE clockTargets.cmake
    NAMESPACE clock::
    DESTINATION lib/cmake/clock)

include(CMakePackageConfigHelpers)
write_basic_package_version_file(
    clockConfigVersion.cmake
    VERSION ${PROJECT_VERSION}
    COMPATIBILITY AnyNewerVersion)

install(FILES 
    cmake/clockConfig.cmake
    ${CMAKE_CURRENT_BINARY_DIR}/clockConfigVersion.cmake
    DESTINATION lib/cmake/clock)

