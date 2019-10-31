#include <string.h>
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBER_H
#define QUICKIE_UBER_H

class UberApiInterface {
    public:
        void getFareEstimate(Trip*);
        void getTripEstimate(Trip*);
        void rideRequest(Trip*);
        void cancelRideRequest(Trip*);
        void getCurrentRide(Trip*);

    private:
        string clientID;
        string state;
        string redirectURL;
};
#endif //QUICKIE_UBER_H
