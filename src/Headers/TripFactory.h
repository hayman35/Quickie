#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"
#include "../User/User.cpp"
#ifndef QUICKIE_UBER_H
#define QUICKIE_UBER_H

class TripFactory {

    public:
        Trip* create(User user, GeographicCoordinate start, GeographicCoordinate end);
};
#endif //QUICKIE_UBER_H
