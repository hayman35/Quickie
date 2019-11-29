#include <string>
#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"

#ifndef QUICKIE_USER_H
#define QUICKIE_USER_H

/**
 * @brief User object
 * @authors Kevin, Nikka, Nirmal, Andrew, Hayman
 */
class User {
    private:
        std::string userID; /** < User ID */
        std::string oAuthToken; /** < token used for authentication */
        GeographicCoordinate* startLocation; /** < startLocation of user */
        Trip *trip; /** < Users current trip */
        std::string uberType; /** < uberType (e.g. uberXL, uberX, BLACK) */

    public:
        /**
         * @brief Construct a new User object
         * @param userID randomized user id
         * @param startLocation startLocation of user
         */
        User(std::string userID, GeographicCoordinate* startLocation);

        /**
         * @brief Get the User ID
         * @return std::string userID string
         */
        std::string getUserID();

        /**
         * @brief Set the User ID object
         * @param userID
         */
        void setUserID(std::string userID);

        /**
         * @brief gets oAuthToken
         * @return std::string oAuthToken
         */
        std::string getOAuthToken();

        /**
         * @brief sets oAuthToken
         * @param oAuthToken
         */
        void setOAuthToken(std::string oAuthToken);

        /**
         * @brief Get the Start Location object
         * @return GeographicCoordinate* 
         */
        GeographicCoordinate* getStartLocation();

        /**
         * @brief Set the Start Location object
         * @param startLocation 
         */
        void setStartLocation(GeographicCoordinate* startLocation);

        /**
         * @brief Adds a trip to the user
         * @param trip
         */
        void addTrip(Trip* trip);

        /**
         * @brief Get the Trip object
         * @return Trip* 
         */
        Trip* getTrip();

        /**
         * @brief Remove any current trips
         */
        void removeTrip();

        /**
         * @brief updates the ubertype
         * @param uberType (uberX, uberXL, etc.)
         */
        void updateUberType(std::string uberType);

        /**
         * @brief Get the Uber Type string
         * @return std::string  (uberXL, uberX, etc.)
         */
        std::string getUberType();

};

#endif //QUICKIE_USER_H
