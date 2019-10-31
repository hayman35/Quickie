#include <string>
#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"

class UberTrip: public Trip {
    private:
        std::string status;
        double fareValue;
        double distance;
        double timeEstimate;
        std::string distanceUnit;
        GeographicCoordinate startLocation;
        GeographicCoordinate endLocation;

    public:
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