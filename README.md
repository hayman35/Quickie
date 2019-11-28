# Setup
```
setup.sh
```

# Building
```
mkdir build
cd build
conan install ..
```

## Windows
```
cmake .. -G "Visual Studio 15 Win64"
cmake --build . --config Release
```
## Unix/Mac
```
cmake .. -G "Unix Makefiles" -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

# Running
In build directory
```
./bin/quickie.exe
```


sudo g++ synthesisTest.cpp -o out -I ../../../src/c++ -I /usr/lib/jvm/java-11-openjdk-armhf/include -I /usr/lib/jvm/java-11-openjdk-armhf/include/linux -L/usr/lib/jvm/java-11-openjdk-armhf/lib/server -ljvm -Wl,-R/usr/lib/jvm/java-11-openjdk-armhf/lib/server
