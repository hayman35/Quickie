#include "../Headers/UberApiInterface.h"
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERAPIIMPLEMENTATION_H
#define QUICKIE_UBERAPIIMPLEMENTATION_H

class UberApiImplementation: public UberApiInterface {
    public:
        void getFareEstimate(Trip *trip);
        void getTripEstimate(Trip *trip);
        void rideRequest(Trip *trip);
        void cancelRideRequest(Trip *trip);
        void getCurrentRide(Trip *trip);
};
#endif //QUICKIE_UBERAPIIMPLEMENTATION_H
