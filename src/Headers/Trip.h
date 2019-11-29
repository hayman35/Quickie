#include <string>
#include "../Headers/GeographicCoordinate.h"

#ifndef QUICKIE_TRIP_H
#define QUICKIE_TRIP_H

/**
 * @brief Main fuction that handles all the information about the uber trips 
 * @authors Nirmal and Hayman 
 * 
 */
class Trip {

    private:
        std::string status; /**< Has the status of the trip*/
        double fareValue; /**< Has the fair cost of the trip*/
        double distance; /**< Has the total distance of the trip*/
        double timeEstimate; /**< Has the time Estimation of the trip*/
        std::string distanceUnit; /**< The distance unit*/
        GeographicCoordinate* startLocation; /**< Has the start location of the trip*/
        GeographicCoordinate* endLocation; /**< Has the end location of the trip*/
    public:
        /**
         * @brief Get the Status object
         * 
         * @return std::string 
         */
        
        virtual std::string getStatus() = 0;
        /**
         * @brief Set the Status object
         * 
         * @param status 
         */

        virtual void setStatus(std::string status) = 0;
        /**
         * @brief Set the Fare Value object
         * 
         * @param fareValue 
         */

        virtual void setFareValue(double fareValue) = 0;
        /**
         * @brief Get the Distance object
         * 
         * @return double 
         */

        virtual double getDistance() = 0;
        /**
         * @brief Set the Distance object
         * 
         * @param distance 
         */

        virtual void setDistance(double distance) = 0;
        /**
         * @brief Get the Time Estimate object
         * 
         * @return double 
         */

        virtual double getTimeEstimate() = 0;
        /**
         * @brief Set the Time Estimate object
         * 
         * @param timeEstimate 
         */

        virtual void setTimeEstimate(double timeEstimate) = 0;
        /**
         * @brief Get the Distance Unit object
         * 
         * @return std::string 
         */

        virtual std::string getDistanceUnit() = 0;
        /**
         * @brief Set the Distance Unit object
         * 
         * @param distanceUnit 
         */

        virtual void setDistanceUnit(std::string distanceUnit) = 0;
        /**
         * @brief Get the Start Location object
         * 
         * @return GeographicCoordinate* 
         */

        virtual GeographicCoordinate* getStartLocation() = 0;
        /**
         * @brief Set the Start Location object
         * 
         * @param startLocation 
         */

        virtual void setStartLocation(GeographicCoordinate* startLocation) = 0;
        /**
         * @brief Get the End Location object
         * 
         * @return GeographicCoordinate* 
         */

        virtual GeographicCoordinate* getEndLocation() = 0;
        /**
         * @brief Set the End Location object
         * 
         * @param endLocation 
         */

        virtual void setEndLocation(GeographicCoordinate* endLocation) = 0;
        /**
         * @brief 
         * 
         */

        virtual void start() = 0;
        /**
         * @brief Get the Fare Value object
         * 
         * @return double 
         */

        virtual double getFareValue() = 0;
        /**
         * @brief Set the Time To Arrive object
         * 
         * @param timeToArrive 
         */

        virtual void setTimeToArrive(double timeToArrive) = 0;
        /**
         * @brief Get the Time To Arrive object
         * 
         * @return double 
         */

        virtual double getTimeToArrive() = 0;
        /**
         * @brief Set the Order Time object
         * 
         * @param orderTime 
         */

        virtual void setOrderTime(time_t orderTime) = 0;
        /**
         * @brief Get the Order Time object
         * 
         * @return time_t 
         */

        virtual time_t getOrderTime() = 0;
        /**
         * @brief Set the Uber Type object
         * 
         * @param uberType 
         */

        virtual void setUberType(std::string uberType) = 0;
        /**
         * @brief Get the Uber Type object
         * 
         * @return std::string 
         */

        virtual std::string getUberType() = 0;
        /**
         * @brief Get the Driver Name object
         * 
         * @return std::string 
         */

        virtual std::string getDriverName() = 0;
        /**
         * @brief Set the Driver Name object
         * 
         * @param driverName 
         */
        virtual void setDriverName(std::string driverName) = 0;

};
#endif //QUICKIE_TRIP_H
