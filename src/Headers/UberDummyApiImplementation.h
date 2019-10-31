
#include "../Headers/UberApiInterface.h"

class UberDummyApiImplementation: UberApiInterface {
    void getFareEstimate(Trip* trip);

    void UberDummyApiImplementation::getTripEstimate(Trip* trip);

    void UberDummyApiImplementation::rideRequest(Trip* trip);

    void UberDummyApiImplementation::cancelRideRequest(Trip* trip);

    void UberDummyApiImplementation::getCurrentRide(Trip* trip);

}