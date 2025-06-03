cd ..
cmake -S . -B build -DCMAKE_TOOLCHAIN_FILE="C:\Users\aleks\vcpkg\scripts\buildsystems\vcpkg.cmake" -DBUILD_TESTING="OFF"
cmake --build build 