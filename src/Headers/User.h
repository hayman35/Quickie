//
// Created by Kevin Johar on 2019-10-30.
//

using namespace std;
#include <string.h>
#include "./../Domain/GeographicCoordinate.cpp"

#ifndef QUICKIE_USER_H
#define QUICKIE_USER_H

class UserInterface {
    public:
        GeographicCoordinate getStartLocation();
    private:
        string userId;
        string oAuthToken;
        GeographicCoordinate startLocation;
};

#endif //QUICKIE_USER_H
