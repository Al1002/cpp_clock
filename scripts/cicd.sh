cd ..
rm -rf build
cmake -S . -B build
cd build
make
for arg in "$@"; do
    if ["$arg" = "-t"]; then
        ctest
    fi
done
cpack
mv cpp_clock-*.deb ..
cd ..
for arg in "$@"; do
    if ["$arg" = "-i"]; then
        sudo dpkg -i cpp_clock-*.debfi
    fi
done