#include <string.h>
#include "./../Domain/GeographicCoordinate.cpp"
#include "../Headers/Trip.h"

#ifndef QUICKIE_USER_H
#define QUICKIE_USER_H

class User {
    private:
        std::string userId;
        std::string oAuthToken;
        GeographicCoordinate startLocation;

    public:
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
