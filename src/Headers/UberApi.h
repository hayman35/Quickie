//
// Created by Kevin Johar on 2019-10-31.
//

#include <string>
#include "../Trip/Trip.cpp"

#ifndef QUICKIE_UBER_H
#define QUICKIE_UBER_H

class UberApi {
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
}
#endif //QUICKIE_UBER_H
