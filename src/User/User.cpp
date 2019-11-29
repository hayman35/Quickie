//
// Created by Kevin Johar on 2019-10-30.
#include <string>
#include "../Headers/User.h"


User::User(std::string userID, GeographicCoordinate* startLocation) {
    this->userID = userID;
    this->startLocation = startLocation;
}


std::string User::getUserID() {
    return userID;
}



void User::setUserID(std::string userID) {
    this->userID = userID;
}


std::string User::getOAuthToken() {
    return oAuthToken;
}


void User::setOAuthToken(std::string oAuthToken) {
    this->oAuthToken = oAuthToken;
}


GeographicCoordinate* User::getStartLocation() {
    return startLocation;
}


void User::setStartLocation(GeographicCoordinate* startLocation) {
    this->startLocation = startLocation;
}


void User::addTrip(Trip* trip) {
    this->trip = trip;
}


Trip* User::getTrip() {
    return trip;
}


void User::removeTrip() {
    //delete trip;
    ;
}


void User::updateUberType(std::string uberType){
    this->uberType = uberType;
}


std::string User::getUberType(){
    return uberType;
}