#include "../Headers/GeographicCoordinate.h"

/**
 * @brief Construct a new Geographic Coordinate:: Geographic Coordinate object
 * 
 * @param latitude 
 * @param longitude 
 */
GeographicCoordinate::GeographicCoordinate(long latitude, long longitude) {
    this->latitude = latitude; /**< Sets the local variable*/
    this->longitude = longitude; /**< Sets the local variable*/
}

/**
 * @brief Getter method for the latitude 
 * 
 * @return long 
 */
long GeographicCoordinate::getLatitude(){
    return this->latitude;
}

/**
 * @brief Setter method for Latitude 
 * 
 * @param latitude 
 */
void GeographicCoordinate::setLatitude(long latitude){
    this->latitude = latitude;
}

/**
 * @brief Getter method for the Longitude 
 * 
 * @return long 
 */
long GeographicCoordinate::getLongitude(){
    return this->longitude;
}

/**
 * @brief Setter method for the Longitude 
 * 
 * @param longitude 
 */
void GeographicCoordinate::setLongitude(long longitude){
    this->longitude = longitude;
}