#include <string>
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERAPIINTERFACE_H
#define QUICKIE_UBERAPIINTERFACE_H

class UberApiInterface {
    public:
        virtual void getFareEstimate(Trip*) = 0;
        virtual void getTripEstimate(Trip*) = 0;
        virtual void rideRequest(Trip*) = 0;
        virtual void cancelRideRequest(Trip*) = 0;
        virtual void getCurrentRide(Trip*) = 0;

    private:
        std::string clientID;
        std::string state;
        std::string redirectURL;
};
#endif //QUICKIE_UBERAPIINTERFACE_H
