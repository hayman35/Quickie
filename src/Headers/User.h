//
// Created by Kevin Johar on 2019-10-30.
//

#include <string>
#include "./../Domain/GeographicCoordinate.cpp"

#ifndef QUICKIE_USER_H
#define QUICKIE_USER_H

class UserInterface {
    public:
        GeographicCoordinate getStartLocation();
    private:
        std::string userId;
        std::string oAuthToken;
        GeographicCoordinate startLocation;
};

#endif //QUICKIE_USER_H
