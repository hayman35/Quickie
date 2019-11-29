#include <string>
#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERTRIP_H
#define QUICKIE_UBERTRIP_H
/**
 * @brief Creates an UberTrip from the information stored in the trip interface 
 * @authors Hayman, Kevin and Nirmal 
 * 
 */
class UberTrip: public Trip {
    private:
        std::string status; /**< Has the status of the trip*/
        double fareValue; /**< Has the fair cost of the trip*/
        double distance; /**< Has the total distance of the trip*/
        double timeEstimate; /**< Has the time Estimation of the trip*/
        double timeToArrive; /**< Has the time Estimation of the arrival trip*/
        std::string distanceUnit; /**< The distance unit*/
        GeographicCoordinate* startLocation; /**< Has the start location of the trip*/
        GeographicCoordinate* endLocation; /**< Has the end location of the trip*/
        time_t orderTime; /**< The time the uber was ordered*/
        std::string uberType; /**< The Uber type*/
        std::string driverName; /** The name of the driver*/

    public:
        /**
         * @brief Construct a new Uber Trip object
         * 
         */
        UberTrip();

        /**
         * @brief Get the Status object
         * 
         * @return std::string 
         */
        std::string getStatus();

        /**
         * @brief Set the Status object
         * 
         * @param status 
         */

        void setStatus(std::string status);
        /**
         * @brief Get the Fare Value object
         * 
         * @return double 
         */
        double getFareValue();

        /**
         * @brief Set the Fare Value object
         * 
         * @param fareValue 
         */
        void setFareValue(double fareValue);

        /**
         * @brief Get the Distance object
         * 
         * @return double 
         */
        double getDistance();

        /**
         * @brief Set the Distance object
         * 
         * @param distance 
         */
        void setDistance(double distance);
        /**
         * @brief Get the Time Estimate object
         * 
         * @return double 
         */
        double getTimeEstimate();

        /**
         * @brief Set the Time Estimate object
         * 
         * @param timeEstimate 
         */
        void setTimeEstimate(double timeEstimate);

        /**
         * @brief Get the Distance Unit object
         * 
         * @return std::string 
         */
        std::string getDistanceUnit();

        /**
         * @brief Set the Distance Unit object
         * 
         * @param distanceUnit 
         */
        void setDistanceUnit(std::string distanceUnit);

        /**
         * @brief Get the Start Location object
         * 
         * @return GeographicCoordinate* 
         */
        GeographicCoordinate* getStartLocation();

        /**
         * @brief Set the Start Location object
         * 
         * @param startLocation 
         */
        void setStartLocation(GeographicCoordinate* startLocation);

        /**
         * @brief Get the End Location object
         * 
         * @return GeographicCoordinate* 
         */
        GeographicCoordinate* getEndLocation();

        /**
         * @brief Set the End Location object
         * 
         * @param endLocation 
         */
        void setEndLocation(GeographicCoordinate* endLocation);

        /**
         * @brief Starts the uber trip
         * 
         */
        void start();

        /**
         * @brief Set the Time To Arrive object
         * 
         * @param timeToArrive 
         */
        void setTimeToArrive(double timeToArrive);

        /**
         * @brief Get the Time To Arrive object
         * 
         * @return double 
         */
        double getTimeToArrive();

        /**
         * @brief Set the Order Time object
         * 
         * @param orderTime 
         */
        void setOrderTime(time_t orderTime);

        /**
         * @brief Get the Order Time object
         * 
         * @return time_t 
         */
        time_t getOrderTime();

        /**
         * @brief Set the Uber Type object
         * 
         * @param uberType 
         */
        void setUberType(std::string uberType);

        /**
         * @brief Get the Uber Type object
         * 
         * @return std::string 
         */
        std::string getUberType();

        /**
         * @brief Set the Driver Name object
         * 
         * @param driverName 
         */
        void setDriverName(std::string driverName);

        /**
         * @brief Get the Driver Name object
         * 
         * @return std::string 
         */
        std::string getDriverName();

};
#endif //QUICKIE_UBERTRIP_H
