//
// Created by Kevin Johar on 2019-10-30.
//

using namespace std;
#include <string.h>
#include "./../Domain/GeographicCoordinate.cpp"
#include "../Trip/Trip.cpp"

#ifndef QUICKIE_USER_H
#define QUICKIE_USER_H

class UserInterface {
    public:
        GeographicCoordinate getStartLocation();

    private:
        // Attributes
        std::string userId;
        std::string oAuthToken;
        GeographicCoordinate startLocation;

        // Methods
        User(std::string userID);
        std::string getUserID();
        void setUserID();
        std::string getOAuthToken();
        void setOAuthToken(std::string oAuthToken);
        GeographicCoordinate getStartLocation();
        void setStartLocation(GeographicCoordinate startLocation);
        void addTrip(Trip trip);
        Trip getTrip();
        Trip removeTrip();
};

#endif //QUICKIE_USER_H
