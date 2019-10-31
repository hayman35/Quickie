//
// Created by Kevin Johar on 2019-10-30.
//
#include <string.h>
#include "../Domain/GeographicCoordinate.cpp"
#include "../Trip/Trip.cpp"

class User {
    private:
        std::string userID;
        std::string oAuthToken;
        GeographicCoordinate* startLocation;
        Trip* trip;

    public:
        User(std::string userID){
            this->userID = userID;
        }

        std::string getUserID(){
            return userID;
        }

        void setUserID(){
            this->userID = userID;
        }

        std::string getOAuthToken(){
            return oAuthToken;
        }

        void setOAuthToken(std::string oAuthToken){
            this->oAuthToken = oAuthToken;
        }

        GeographicCoordinate getStartLocation(){
            return *startLocation;
        }

        void setStartLocation(GeographicCoordinate startLocation){
            this->startLocation = &startLocation;
        }

        void addTrip(Trip trip){
            this->trip = &trip;
        }

        Trip getTrip(){
            return *trip;
        }

        Trip removeTrip(){
            this->trip = NULL;
        }

};