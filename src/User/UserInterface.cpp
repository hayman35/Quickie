//
// Created by Kevin Johar on 2019-10-30.
//
#include <string>
#include "./../Domain/GeographicCoordinate.cpp"

class UserInterface {
    private:
        std::string userId;
        std::string oAuthToken;
        GeographicCoordinate startLocation;

    public:
        GeographicCoordinate getStartLocation();
};