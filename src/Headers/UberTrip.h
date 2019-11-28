#include <string>
#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERTRIP_H
#define QUICKIE_UBERTRIP_H

class UberTrip: public Trip {
    private:
        std::string status;
        double fareValue;
        double distance;
        double timeEstimate;
        double timeToArrive;
        std::string distanceUnit;
        GeographicCoordinate *startLocation;
        GeographicCoordinate *endLocation;
        time_t orderTime;
        std::string uberType;
        std::string driverName;

    public:
        UberTrip();

        std::string getStatus();

        void setStatus(std::string status);

        double getFareValue();

        void setFareValue(double fareValue);

        double getDistance();

        void setDistance(double distance);

        double getTimeEstimate();

        void setTimeEstimate(double timeEstimate);

        std::string getDistanceUnit();

        void setDistanceUnit(std::string distanceUnit);

        GeographicCoordinate getStartLocation();

        void setStartLocation(GeographicCoordinate startLocation);

        GeographicCoordinate getEndLocation();

        void setEndLocation(GeographicCoordinate endLocation);

        void start();

        void setTimeToArrive(double timeToArrive);

        double getTimeToArrive();

        void setOrderTime(time_t orderTime);

        time_t getOrderTime();

        void setUberType(std::string uberType);

        std::string getUberType();

        void setDriverName(std::string driverName);

        std::string getDriverName();

};
#endif //QUICKIE_UBERTRIP_H
