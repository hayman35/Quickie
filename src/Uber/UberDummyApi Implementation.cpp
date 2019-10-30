
#include <Trip.cpp>

class UberDummyApiImplementation{
    private:
        ;

    public:
        Trip getFareEstimate(Trip){
            Trip.setStatus("fare estimated");
            Trip.setFareValue(10.0);
            Trip.setDistance(5);
            Trip.setTimeEstimate(3);
            Trip.setDistanceUnit("miles");
            return Trip;
        }

        Trip getTripEstimate(Trip){
            Trip.setStatus("trip estimated");
            Trip.setFareValue(10.0);
            Trip.setDistance(5);
            Trip.setTimeEstimate(3);
            Trip.setDistanceUnit("miles");
            return Trip;
        }

        Trip rideRequest(Trip){
            Trip.setStatus("ride requested");
            return Trip;
        }

        Trip cancelRideRequest(Trip){
            Trip.setStatus("cancelled");
            Trip.setFareValue(-1);
            Trip.setDistance(-1);
            Trip.setTimeEstimate(-1);
            Trip.setDistanceUnit("");
            return Trip;
        }

        Trip getCurrentRide(Trip){
            return Trip;
        }
}