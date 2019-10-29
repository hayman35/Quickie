Test Push to origin

#Building
```
mkdir build
cd build
conan install ../src
```

##Windows
```
cmake .. -G "Visual Studio 15 Win64"
cmake --build . --config Release
```
##Unix/Mac
```
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

#Running
In build directory
```
./bin/quickie.exe
```