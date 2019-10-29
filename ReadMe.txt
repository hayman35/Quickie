Test Push to origin

#Building
##Windows
In build directory
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