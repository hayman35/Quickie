
#include <string>
#include "../Headers/Trip.h"

class Trip {
    private:

    public:
        virtual std::string getStatus();

        virtual void setStatus(std::string status);

        virtual double getFareValue();

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



