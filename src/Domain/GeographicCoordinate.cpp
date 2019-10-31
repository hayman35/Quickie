#include "../Headers/GeographicCoordinate.h"

GeographicCoordinate::GeographicCoordinate(long latitude, long longitude){
    this->latitude = latitude;
    this->longitude = longitude;
}

long GeographicCoordinate::getLatitude(){
    return this->latitude;
}

void GeographicCoordinate::setLatitude(long *latitude){
    this->latitude = &latitude;
}

long GeographicCoordinate::getLongitude(){
    return this->longitude;
}

void GeographicCoordinate::setLongitude(long longitude){
    this->longitude = *longitude;
}