//
// Created by Kevin Johar on 2019-10-30.
//
#include "./../Domain/GeographicCoordinate.cpp"

class UserInterface {
    private:
        string userId;
        string oAuthToken;
        GeographicCoordinate startLocation;

    public:
        GeographicCoordinate getStartLocation();
};