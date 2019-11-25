cmake_minimum_required(VERSION 2.8.12)
project(Quickie)

add_definitions("-std=c++11")

include(${CMAKE_BINARY_DIR}/../build/conanbuildinfo.cmake)
conan_basic_setup()

add_executable(quickie ./src/main.cpp ./src/Trip/TripFactory.cpp ./src/Trip/UberTrip.cpp ./src/Uber/UberDummyApiImplementation.cpp ./src/Uber/UberApiImplementation.cpp ./src/User/User.cpp ./src/User/UserFactory.cpp ./src/Domain/GeographicCoordinate.cpp ./src/Utility/UserHttpRequest.cpp)

target_link_libraries(quickie ${CONAN_LIBS})