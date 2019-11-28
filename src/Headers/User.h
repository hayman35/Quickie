#include <string>
#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"

#ifndef QUICKIE_USER_H
#define QUICKIE_USER_H

class User {
    private:
        std::string userID;
        std::string oAuthToken;
        GeographicCoordinate* startLocation;
        Trip *trip;
        std::string uberType;

    public:
        User(std::string userID, GeographicCoordinate* startLocation);
        std::string getUserID();
        void setUserID(std::string userID);
        std::string getOAuthToken();
        void setOAuthToken(std::string oAuthToken);
        GeographicCoordinate* getStartLocation();
        void setStartLocation(GeographicCoordinate* startLocation);
        void addTrip(Trip* trip);
        Trip* getTrip();
        void removeTrip();
        void updateUberType(std::string uberType);
        std::string getUberType();

};

#endif //QUICKIE_USER_H
