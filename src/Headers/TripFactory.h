#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"
#include "../Headers/User.h"
#include "../Headers/UberTrip.h"
#include "../Headers/UberDummyApiImplementation.h"
#include "../Headers/UberApiInterface.h"

#ifndef QUICKIE_TRIPFACTORY_H
#define QUICKIE_TRIPFACTORY_H

/**
 * @brief Factory for creating trips
 * @authors Kevin, Andrew, Hayman, Nirmal
 */
class TripFactory {
    public:
    /**
     * @param user
     * @param start
     * @param end
     * @return Trip* pointer to trip
     */
        Trip* create(User user, GeographicCoordinate* start, GeographicCoordinate* end);
};
#endif //QUICKIE_TRIPFACTORY_H
