#include "../Headers/TripFactory.h"

/**
 * @brief Factory for creating trips
 * @authors Kevin, Andrew, Hayman, Nirmal
 * @param user
 * @param start
 * @param end
 * @return Trip* pointer to trip
 */

Trip* TripFactory::create(User user, GeographicCoordinate* start, GeographicCoordinate* end){
    Trip* trip = new UberTrip();
    trip->setStartLocation(start);
    trip->setEndLocation(end);

    UberDummyApiImplementation* uberApi = new UberDummyApiImplementation();
    uberApi->getFareEstimate(trip);

    return trip;
}