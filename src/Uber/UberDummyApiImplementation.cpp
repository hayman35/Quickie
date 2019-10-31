
#include <../Trip/Trip.cpp>

class UberDummyApiImplementation {
    private:
        ;

    public:
        Trip getFareEstimate(Trip* trip){
            trip->setStatus("fare estimated");
            trip->setFareValue(10.0);
            trip->setDistance(5);
            trip->setTimeEstimate(3);
            trip->setDistanceUnit("miles");
            return trip;
        }

        Trip getTripEstimate(Trip* trip){
            trip->setStatus("trip estimated");
            trip->setFareValue(10.0);
            trip->setDistance(5);
            trip->setTimeEstimate(3);
            trip->setDistanceUnit("miles");
            return trip;
        }

        Trip rideRequest(Trip trip){
            trip->setStatus("ride requested");
            return trip;
        }

        Trip cancelRideRequest(Trip trip){
            trip->setStatus("cancelled");
            trip->setFareValue(-1);
            trip->setDistance(-1);
            trip->setTimeEstimate(-1);
            trip->setDistanceUnit("");
            return trip;
        }

        Trip getCurrentRide(Trip trip){
            return trip;
        }
}