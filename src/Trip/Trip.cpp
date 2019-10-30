
#include <string>
#include <GeographicCoordinate.h>

class Trip{
    private:
        string status;
        double fareValue;
        double distance;
        double timeEstimate;
        string distanceUnit;
        GeographicCoordinate startLocation;
        GeographicCoordinate endLocation;

    public:
        string getStatus(){
            return status;
        }

        void setStats(string status){
            this.status = status;
        }

        double getFareValue(){
            return fareValue;
        }

        void setFareValue(double fareValue){
            this.fareValue = fareValue;
        }

        double getDistance(){
            return distance;
        }

        void setDistance(double distance){
            this.distance = distance;
        }

        double getTimeEstimate(){
            return timeEstimate;
        }

        void setTimeEstimate(double timeEstimate){
            this.timeEstimate = timeEstimate;
        }

        string getDistanceUnit(){
            return distanceUnit;
        }

        void setDistanceUnit(string distanceUnit){
            this.distanceUnit = distanceUnit;
        }

        GeographicCoordinate getStartLocation(){
            return startLocation;
        }

        void setStartLocation(GeographicCoordinate startLocation){
            this.startLocation = startLocation;
        }

        GeographicCoordinate getEndLocation(){
            return endLocation;
        }

        void setStartLocation(GeographicCoordinate endLocation){
            this.endLocation = endLocation;
        }
}
