
#include <string.h>
#include <Trip.h>

class TripInterface{
    public:
        string getStatus();
        void setStatus(string);

        double getFareValue();
        void setFareValue(double);

        double getDistance();
        void setDistance(double);

        double getTimeEstimate();
        void setTimeEstimate(double);

        string getDistanceUnit();
        void setDistanceUnit(string);

        GeographicCoordinate getStartLocation();
        void setStartLocation(GeographicCoordinate);

        GeographicCoordinate getEndLocation();
        void setEndLocation(GeographicCoordinate);

    private:
        string status;
        double fareValue;
        double distance;
        double timeEstimate;
        string distanceUnit;
        GeographicCoordinate startLocation;
        GeographicCoordinate endLocation;
};