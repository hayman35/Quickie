#include "../Headers/UberApiInterface.h"

#ifndef QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H
#define QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H

class UberDummyApiImplementation: UberApiInterface {
    void UberDummyApiImplementation::getFareEstimate(Trip *trip);

    void UberDummyApiImplementation::getTripEstimate(Trip *trip);

    void UberDummyApiImplementation::rideRequest(Trip *trip);

    void UberDummyApiImplementation::cancelRideRequest(Trip *trip);

    void UberDummyApiImplementation::getCurrentRide(Trip *trip);

};
#endif //QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H
