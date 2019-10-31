#include "../Headers/GeographicCoordinate.h"

GeographicCoordinate(long latitude, long longitude){
    this->latitude = latitude;
    this->longitude = longitude;
}

long GeographicCoordinate::getLatitude(){
    return latitude;
}

void GeographicCoordinate::setLatitude(long latitude){
    this->latitude = latitude;
}

long GeographicCoordinate::getLongitude(){
    return longitude;
}

void GeographicCoordinate::setLongitude(long longitude){
    this->longitude = longitude;
}