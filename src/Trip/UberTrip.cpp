
#include <string>
#include "../Domain/GeographicCoordinate.cpp"
#include "../Trip/Trip.cpp"

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
        std::string getStatus(){
            return status;
        }

        void setStatus(std::string status){
            this->status = status;
        }

        double getFareValue(){
            return fareValue;
        }

        void setFareValue(double fareValue){
            this->fareValue = fareValue;
        }

        double getDistance(){
            return distance;
        }

        void setDistance(double distance){
            this->distance = distance;
        }

        double getTimeEstimate(){
            return timeEstimate;
        }

        void setTimeEstimate(double timeEstimate){
            this->timeEstimate = timeEstimate;
        }

        std::string getDistanceUnit(){
            return distanceUnit;
        }

        void setDistanceUnit(std::string distanceUnit){
            this->distanceUnit = distanceUnit;
        }

        GeographicCoordinate getStartLocation(){
            return startLocation;
        }

        void setStartLocation(GeographicCoordinate startLocation){
            this->startLocation = startLocation;
        }

        GeographicCoordinate getEndLocation(){
            return endLocation;
        }

        void setEndLocation(GeographicCoordinate endLocation){
            this->endLocation = endLocation;
        }
};
