#include <string.h>
#include "../Headers/Trip.h"
class TripInterface{
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

   
};