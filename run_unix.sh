cd build
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
#cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Debug
cmake --build .
cd bin
./quickie
cd ..