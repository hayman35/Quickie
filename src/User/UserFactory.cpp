#include "../Headers/UserFactory.h"

//TODO: This method should take an input (file with ONE user or start long/lat)
// which defines which specific user is getting created first

User* UserFactory::createUser() {
    long startLong = 0;
    long startLat = 0;
    GeographicCoordinate* startGeo = new GeographicCoordinate(startLong, startLat);
    User* user = new User("startingID", *startGeo);

    //Authorize
    user->setOAuthToken("mockToken");
    user->setStartLocation(*startGeo);
    return user;
}