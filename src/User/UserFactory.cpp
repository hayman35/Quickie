#include "User.cpp"

class UserFactory{

    public:
<<<<<<< Updated upstream
        User* createUser(){
=======
        User createUser(){
>>>>>>> Stashed changes
            User* user = new User("startingID");

            //Authorize
            user->setOAuthToken("mockToken");
            long startLong = 0;
            long startLat = 0;
            GeographicCoordinate* startGeo = new GeographicCoordinate(startLong, startLat);
            user->setStartLocation(*startGeo);
<<<<<<< Updated upstream
            return user;
=======
            return *user;
>>>>>>> Stashed changes

        }
};