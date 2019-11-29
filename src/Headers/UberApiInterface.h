#include <string>
#include "../Headers/Trip.h"

#ifndef QUICKIE_UBERAPIINTERFACE_H
#define QUICKIE_UBERAPIINTERFACE_H

/**
 * @brief API Interface for the Uber API
 * @authors Kevin, Nikka, Nirmal, Andrew, Hayman
 */
class UberApiInterface {
    public:
        /**
         * @brief Get the Fare Estimate object
         */
        virtual void getFareEstimate(Trip*) = 0;

        /**
         * @brief request a ride through the api
         */
        virtual void rideRequest(Trip*) = 0;

        /**
         * @brief cancel a ride request
         */
        virtual void cancelRideRequest(Trip*) = 0;

    private:
        /**
         * @brief clientID used for API
         */
        std::string clientID;

        /**
         * @brief current state of api
         */
        std::string state;

        /**
         * @brief redirectionURL for future oAuth
         */
        std::string redirectURL;
};
#endif //QUICKIE_UBERAPIINTERFACE_H
