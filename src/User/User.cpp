//
// Created by Kevin Johar on 2019-10-30.
//
#include <string.h>
#include "../Headers/User.h"
#include "../Domain/GeographicCoordinate.cpp"
#include "../Trip/Trip.cpp"

User::User(std::string userID){
    this->userID = userID;
}

std::string User::getUserID(){
    return userID;
}

void User::setUserID(){
    this->userID = userID;
}

std::string User::getOAuthToken(){
    return oAuthToken;
}

void User::setOAuthToken(std::string oAuthToken){
    this->oAuthToken = oAuthToken;
}

GeographicCoordinate User::getStartLocation(){
    return *startLocation;
}

void User::setStartLocation(GeographicCoordinate startLocation){
    this->startLocation = &startLocation;
}

void User::addTrip(Trip trip){
    this->trip = &trip;
}

Trip User::getTrip(){
    return *trip;
}

Trip User::removeTrip(){
    delete trip;
}