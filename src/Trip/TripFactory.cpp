#include "../Headers/TripFactory.h"


Trip* TripFactory::create(User user, GeographicCoordinate* start, GeographicCoordinate* end){
    Trip* trip = new UberTrip();
    trip->setStartLocation(start);
    trip->setEndLocation(end);

    UberDummyApiImplementation* uberApi = new UberDummyApiImplementation();
    uberApi->getFareEstimate(trip);

    return trip;
}