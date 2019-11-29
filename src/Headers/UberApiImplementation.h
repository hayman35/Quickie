#include "../Headers/UberApiInterface.h"
#include "../Headers/Trip.h"
#include <Poco/JSON/JSON.h>
#include <Poco/JSON/Parser.h>
#include <Poco/Dynamic/Var.h>
#include "../Headers/UserHttpRequest.h"
#include "Poco/Net/HTTPRequest.h"

#ifndef QUICKIE_UBERAPIIMPLEMENTATION_H
#define QUICKIE_UBERAPIIMPLEMENTATION_H

/**
 * @brief Implementation of the UberAPI
 */
class UberApiImplementation : public UberApiInterface {
    public:
        /**
         * @brief Get the Fare Estimate object
         */
        void getFareEstimate(Trip *trip);

        /**
         * @brief request a ride through the api
         */
        void rideRequest(Trip *trip);

        /**
         * @brief cancel a ride request
         */
        void cancelRideRequest(Trip *trip);
};
#endif //QUICKIE_UBERAPIIMPLEMENTATION_H
