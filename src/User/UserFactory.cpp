#include "../Headers/UserFactory.h"

User* UserFactory::createUser(){
    User* user = new User("startingID");

    //Authorize
    user->setOAuthToken("mockToken");
    long startLong = 0;
    long startLat = 0;
    GeographicCoordinate* startGeo = new GeographicCoordinate(startLong, startLat);
    user->setStartLocation(*startGeo);
    return user;
}