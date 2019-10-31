#include <string>
#include "../Domain/GeographicCoordinate.cpp"
#ifndef QUICKIE_UBER_H
#define QUICKIE_UBER_H

class Trip {

    private:
        std::string status;
        double fareValue;
        double distance;
        double timeEstimate;
        std::string distanceUnit;
        GeographicCoordinate startLocation;
        GeographicCoordinate endLocation;
    public:
        virtual std::string getStatus();
        virtual void setStats(std::string status);
        virtual void setFareValue(double fareValue);
        virtual double getDistance();
        virtual void setDistance(double distance);
        virtual double getTimeEstimate();
        virtual void setTimeEstimate(double timeEstimate);
        virtual std::string getDistanceUnit();
        virtual void setDistanceUnit(std::string distanceUnit);
        virtual GeographicCoordinate getStartLocation();
        virtual void setStartLocation(GeographicCoordinate startLocation);
        virtual GeographicCoordinate getEndLocation();
        virtual void setEndLocation(GeographicCoordinate endLocation);

};
#endif //QUICKIE_UBER_H
