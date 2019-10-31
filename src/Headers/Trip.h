#include <string>
#include "../Headers/GeographicCoordinate.h"

#ifndef QUICKIE_TRIP_H
#define QUICKIE_TRIP_H

class Trip {

    private:
        std::string status;
        double fareValue;
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
        ~Trip();

};
#endif //QUICKIE_TRIP_H
