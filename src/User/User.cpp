//
// Created by Kevin Johar on 2019-10-30.
//
#include <string.h>
#include "GeographicCoordinate.h"

class User {
    private:
        string userID;
        string oAuthToken;
        GeographicCoordinate startLocation;

    public:
        User(string userID){
            this->userUD = userID;
        }

        string getUserID(){
            return userID;
        }

        void setUserID(){
            this->userID = userID;
        }

        string getOAuthToken(){
            return oAuthToken;
        }

        void setOAuthToken(string oAuthToken){
            this->oAuthToken = oAuthToken;
        }

        GeographicCoordinate getStartLocation(){
            return startLocation;
        }

        void setStartLocation(GeographicCoordinate startLocation){
            this->startLocation = startLocation;
        }

        void addTrip(Trip trip){
            this->trip = trip;
        }

        Trip getTrip(Trip trip){
            return trip;
        }

        Trip removeTrip(){
            this->trip = NULL;
        }

}