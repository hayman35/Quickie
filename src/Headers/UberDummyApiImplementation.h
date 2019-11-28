#include "../Headers/UberApiInterface.h"
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H
#define QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H

class UberDummyApiImplementation {
    public:
        void getFareEstimate(Trip *trip);
        void rideRequest(Trip *trip);
        void cancelRideRequest(Trip *trip);
        void getCurrentRide(Trip *trip);

};
#endif //QUICKIE_UBERDUMMYAPIIMPLEMENTATION_H
