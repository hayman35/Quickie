#include <string>
#include "../Domain/GeographicCoordinate.cpp"

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
    std::string getStatus();
    void setStats(std::string status);
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

};