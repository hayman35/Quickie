
#include "../Headers/UberDummyApiImplementation.h"

void UberDummyApiImplementation::getFareEstimate(Trip* trip){
        trip->setStatus("fare estimated");
        trip->setFareValue(10.0);
        trip->setDistance(5);
        trip->setTimeEstimate(3);
        trip->setDistanceUnit("miles");
}

void UberDummyApiImplementation::getTripEstimate(Trip* trip){
    trip->setStatus("trip estimated");
    trip->setFareValue(10.0);
    trip->setDistance(5);
    trip->setTimeEstimate(3);
    trip->setDistanceUnit("miles");
}

void UberDummyApiImplementation::rideRequest(Trip* trip){
    trip->setStatus("ride requested");
}

void UberDummyApiImplementation::cancelRideRequest(Trip* trip){
    trip->setStatus("cancelled");
    trip->setFareValue(-1);
    trip->setDistance(-1);
    trip->setTimeEstimate(-1);
    trip->setDistanceUnit("");
}

void UberDummyApiImplementation::getCurrentRide(Trip* trip){
    ;
}
