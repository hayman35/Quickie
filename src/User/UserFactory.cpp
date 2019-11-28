#include "../Headers/UserFactory.h"


User* UserFactory::createUser() {
    long startLong = 346347;
    long startLat = 57547;
    GeographicCoordinate* startGeo = new GeographicCoordinate(startLong, startLat);
    User* user = new User("startingID", startGeo);

    //Authorize
    user->setOAuthToken("mockToken");
    user->setStartLocation(startGeo);
    return user;
}