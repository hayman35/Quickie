#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"
#include "../Headers/User.h"

#ifndef QUICKIE_TRIPFACTORY_H
#define QUICKIE_TRIPFACTORY_H

class TripFactory {
    public:
        Trip* create(User user, GeographicCoordinate start, GeographicCoordinate end);
};
#endif //QUICKIE_TRIPFACTORY_H
