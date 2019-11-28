#include <string>
#include "../Headers/GeographicCoordinate.h"

#ifndef QUICKIE_TRIP_H
#define QUICKIE_TRIP_H

class Trip {

    private:
        std::string status;
        double fareValue;

        //TODO: Remove distance and time estimate, only give values directly from API once implemented, should be the latest data ONLY
        double distance;
        double timeEstimate;
        std::string distanceUnit;
        GeographicCoordinate *startLocation;
        GeographicCoordinate *endLocation;
    public:
        virtual std::string getStatus() = 0;
        virtual void setStatus(std::string status) = 0;
        virtual void setFareValue(double fareValue) = 0;
        virtual double getDistance() = 0;
        virtual void setDistance(double distance) = 0;
        virtual double getTimeEstimate() = 0;
        virtual void setTimeEstimate(double timeEstimate) = 0;
        virtual std::string getDistanceUnit() = 0;
        virtual void setDistanceUnit(std::string distanceUnit) = 0;
        virtual GeographicCoordinate getStartLocation() = 0;
        virtual void setStartLocation(GeographicCoordinate startLocation) = 0;
        virtual GeographicCoordinate getEndLocation() = 0;
        virtual void setEndLocation(GeographicCoordinate endLocation) = 0;
        virtual void start() = 0;
        virtual double getFareValue() = 0;
        virtual void setTimeToArrive(double timeToArrive) = 0;
        virtual double getTimeToArrive() = 0;
        virtual void setOrderTime(time_t orderTime) = 0;
        virtual time_t getOrderTime() = 0;
        virtual void setUberType(std::string uberType) = 0;

};
#endif //QUICKIE_TRIP_H
