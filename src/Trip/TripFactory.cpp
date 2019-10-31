#include "../Headers/TripFactory.h"


Trip* TripFactory::create(User user, GeographicCoordinate start, GeographicCoordinate end){
    Trip* trip = new Trip();
    trip->setStartLocation(start);
    trip->setEndLocation(end);
    return trip;
}