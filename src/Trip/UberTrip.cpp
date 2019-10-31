
#include "../Headers/UberTrip.h"

UberTrip::UberTrip(){
    ;
}

std::string UberTrip::getStatus(){
    return status;
}

void UberTrip::setStatus(std::string status){
    this->status = status;
}

double UberTrip::getFareValue(){
    return fareValue;
}

void UberTrip::setFareValue(double fareValue){
    this->fareValue = fareValue;
}

double UberTrip::getDistance(){
    return distance;
}

void UberTrip::setDistance(double distance){
    this->distance = distance;
}

double UberTrip::getTimeEstimate(){
    return timeEstimate;
}

void UberTrip::setTimeEstimate(double timeEstimate){
    this->timeEstimate = timeEstimate;
}

std::string UberTrip::getDistanceUnit(){
    return distanceUnit;
}

void UberTrip::setDistanceUnit(std::string distanceUnit){
    this->distanceUnit = distanceUnit;
}

GeographicCoordinate UberTrip::getStartLocation(){
    return *startLocation;
}

void UberTrip::setStartLocation(GeographicCoordinate startLocation){
    this->startLocation = &startLocation;
}

GeographicCoordinate UberTrip::getEndLocation(){
    return *endLocation;
}

void UberTrip::setEndLocation(GeographicCoordinate endLocation){
    this->endLocation = &endLocation;
}

void UberTrip::start(){
    ;
}

~Trip() {
    ;
}