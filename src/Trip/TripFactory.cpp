#include "../Domain/GeographicCoordinate.cpp"
#include "../Trip/Trip.cpp"
#include "../User/User.cpp"
#include "../Headers/TripFactory.h"
class TripFactory {

    public:
        Trip create(User user, GeographicCoordinate start, GeographicCoordinate end){
            Trip* trip = new Trip();
            trip->setStartLocation(start);
            trip->setEndLocation(end);
            return *trip;
        }
};