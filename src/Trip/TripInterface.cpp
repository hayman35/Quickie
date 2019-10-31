
#include <string.h>
#include "Trip.cpp"
class TripInterface{
    public:
        std::string getStatus();
        void setStatus(std::string);

        double getFareValue();
        void setFareValue(double);

        double getDistance();
        void setDistance(double);

        double getTimeEstimate();
        void setTimeEstimate(double);

        std::string getDistanceUnit();
        void setDistanceUnit(std::string);

        GeographicCoordinate getStartLocation();
        void setStartLocation(GeographicCoordinate);

        GeographicCoordinate getEndLocation();
        void setEndLocation(GeographicCoordinate);

    private:
        std::string status;
        double fareValue;
        double distance;
        double timeEstimate;
        std::string distanceUnit;
        GeographicCoordinate startLocation;
        GeographicCoordinate endLocation;
};