cmake_minimum_required(VERSION 2.8.12)
project(Quickie)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/../build/conanbuildinfo.cmake)
conan_basic_setup()

include_directories("/usr/lib/jvm/java-11-openjdk-armhf/include/linux")
include_directories("/usr/lib/jvm/java-11-openjdk-armhf/include")
add_executable(quickie ./src/main.cpp ./src/Trip/TripFactory.cpp ./src/Trip/UberTrip.cpp ./src/Uber/UberApiImplementation.cpp ./src/User/User.cpp ./src/User/UserFactory.cpp ./src/Domain/GeographicCoordinate.cpp ./src/Utility/UserHttpRequest.cpp)

#target_compile_options (quickie PRIVATE -I /usr/lib/jvm/java-11-openjdk-armhf/include)
#target_compile_options (quickie PRIVATE -I /usr/lib/jvm/java-11-openjdk-armhf/include/linux)
#target_compile_options (quickie PRIVATE -L/usr/lib/jvm/java-11-openjdk-armhf/lib/server)
#target_compile_options (quickie PRIVATE -ljvm)
target_link_libraries(quickie -ljvm)
set (CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -L/usr/lib/jvm/java-11-openjdk-armhf/lib/server -Wl,-R/usr/lib/jvm/java-11-openjdk-armhf/lib/server")
#target_compile_options (quickie PRIVATE -Wl,-R/usr/lib/jvm/java-11-openjdk-armhf/lib/server)


target_link_libraries(quickie ${CONAN_LIBS})
