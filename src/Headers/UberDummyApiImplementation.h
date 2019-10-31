#include "../Headers/UberApiInterface.h"

#ifndef QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H
#define QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H

class UberDummyApiImplementation: UberApiInterface {
    void getFareEstimate(Trip *trip);

    void getTripEstimate(Trip *trip);

    void rideRequest(Trip *trip);

    void cancelRideRequest(Trip *trip);

    void getCurrentRide(Trip *trip);

};
#endif //QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H
