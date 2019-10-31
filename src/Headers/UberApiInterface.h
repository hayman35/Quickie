#include <string>
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERAPIINTERFACE_H
#define QUICKIE_UBERAPIINTERFACE_H

class UberApiInterface {
    public:
        virtual void getFareEstimate(Trip*);
        virtual void getTripEstimate(Trip*);
        virtual void rideRequest(Trip*);
        virtual void cancelRideRequest(Trip*);
        virtual void getCurrentRide(Trip*);

    private:
        std::string clientID;
        std::string state;
        std::string redirectURL;
};
#endif //QUICKIE_UBERAPIINTERFACE_H
