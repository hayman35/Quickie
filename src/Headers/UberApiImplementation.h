#include "../Headers/UberApiInterface.h"
#include "../Headers/Trip.h"
#include <Poco/JSON/JSON.h>
#include <Poco/JSON/Parser.h>
#include <Poco/Dynamic/Var.h>
#include "../Headers/UserHttpRequest.h"
#include "Poco/Net/HTTPRequest.h"

#ifndef QUICKIE_UBERAPIIMPLEMENTATION_H
#define QUICKIE_UBERAPIIMPLEMENTATION_H

class UberApiImplementation : public UberApiInterface {
    public:
        void getFareEstimate(Trip *trip);
        void getTripEstimate(Trip *trip);
        void rideRequest(Trip *trip);
        void cancelRideRequest(Trip *trip);
        void getCurrentRide(Trip *trip);
};
#endif //QUICKIE_UBERAPIIMPLEMENTATION_H
