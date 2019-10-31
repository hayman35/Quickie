#include "../Headers/UserFactory.h"

User* UserFactory::createUser(){
    long startLong = 0;
    long startLat = 0;
    GeographicCoordinate* startGeo = new GeographicCoordinate(startLong, startLat);
    User* user = new User("startingID", *startGeo);

    //Authorize
    user->setOAuthToken("mockToken");
    user->setStartLocation(*startGeo);
    return user;
}