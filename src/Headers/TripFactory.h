#include "../Domain/GeographicCoordinate.cpp"
#include "../Trip/Trip.cpp"
#include "../User/User.cpp"
class TripFactory {

    public:
        Trip create(User user, GeographicCoordinate start, GeographicCoordinate end);
};