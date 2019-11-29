
#include "../Headers/UberTrip.h"

/**
 * @brief Construct a new Uber Trip:: Uber Trip object
 * 
 */
UberTrip::UberTrip(){
    ;
}

/**
 * @brief Get the Status object
 * 
 * @return std::string 
 */
std::string UberTrip::getStatus(){
    return status;
}

/**
 * @brief Get the Status object
 * 
 * @param status 
 */
void UberTrip::setStatus(std::string status){
    this->status = status;
}

/**
 * @brief Get the Fare Value object
 * 
 * @return double 
 */
double UberTrip::getFareValue(){
    return fareValue;
}

/**
 * @brief Set the Fare Value object
 * 
 * @param fareValue 
 */
void UberTrip::setFareValue(double fareValue){
    this->fareValue = fareValue;
}

/**
 * @brief Get the Distance object
 * 
 * @return double 
 */
double UberTrip::getDistance(){
    return distance;
}

/**
 * @brief Set the Distance object
 * 
 * @param distance 
 */
void UberTrip::setDistance(double distance){
    this->distance = distance;
}

/**
 * @brief Get the Time Estimate object
 * 
 * @return double 
 */
double UberTrip::getTimeEstimate(){
    return timeEstimate;
}

/**
 * @brief Set the Time Estimate object
 * 
 * @param timeEstimate 
 */
void UberTrip::setTimeEstimate(double timeEstimate){
    this->timeEstimate = timeEstimate;
}

/**
 * @brief 
 * 
 * @return std::string 
 */
std::string UberTrip::getDistanceUnit(){
    return distanceUnit;
}

/**
 * @brief Get the Distance Unit object
 * 
 * @param distanceUnit 
 */
void UberTrip::setDistanceUnit(std::string distanceUnit){
    this->distanceUnit = distanceUnit;
}

/**
 * @brief Set the Distance Unit object
 * 
 * @return GeographicCoordinate* 
 */
GeographicCoordinate* UberTrip::getStartLocation(){
    return startLocation;
}

/**
 * @brief Get the Start Location object
 * 
 * @param startLocation 
 */
void UberTrip::setStartLocation(GeographicCoordinate* startLocation){
    this->startLocation = startLocation;
}

/**
 * @brief Set the Start Location object
 * 
 * @return GeographicCoordinate* 
 */
GeographicCoordinate* UberTrip::getEndLocation(){
    return endLocation;
}

/**
 * @brief Get the End Location object
 * 
 * @param endLocation 
 */
void UberTrip::setEndLocation(GeographicCoordinate* endLocation){
    this->endLocation = endLocation;
}

/**
 * @brief  Set the End Location object
 * 
 */
void UberTrip::start(){
    ;
}

/**
 * @brief Starts the uber trip
 * 
 * @param timeToArrive 
 */
void UberTrip::setTimeToArrive(double timeToArrive){
    this->timeToArrive = timeToArrive;
}

/**
 * @brief Set the Time To Arrive object
 * 
 * @return double 
 */
double UberTrip::getTimeToArrive(){
    return timeToArrive;
}

/**
 * @brief Get the Time To Arrive object
 * 
 * @param orderTime 
 */
void UberTrip::setOrderTime(time_t orderTime){
    this->orderTime = orderTime;
}

/**
 * @brief Set the Order Time object
 * 
 * @return time_t 
 */
time_t UberTrip::getOrderTime(){
    return orderTime;
}

/**
 * @brief Get the Order Time object
 * 
 * @param uberType 
 */
void UberTrip::setUberType(std::string uberType){
    this->uberType = uberType;
}

/**
 * @brief Set the Uber Type object
 * 
 * @return std::string 
 */
std::string UberTrip::getUberType(){
    return uberType;
}

/**
 * @brief Set the Driver Name object
 * 
 * @param driverName 
 */
void UberTrip::setDriverName(std::string driverName){
    this->driverName = driverName;
}

/**
 * @brief Get the Driver Name object
 * 
 * @return std::string 
 */
std::string UberTrip::getDriverName(){
    return driverName;
}