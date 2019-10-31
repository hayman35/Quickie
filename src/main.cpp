#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << "abcdefghijklmnopqrstuvwxyz";
    ds.close();
    cout << Poco::DigestEngine::digestToHex(md5.digest()) << endl;

    UserFactory userFactory = new UserFactory();
    TripFactory tripFactory = new TripFactory();

    //Get command
    //request trip

    long startLat = 0;
    long startLong = 0;

    cout << "Enter starting lat: ";
    startLat << cin;

    cout << "Enter starting long: ";
    startLong << cin;

    GeographicCoordinate endLocation = new GeographicCoordinate(startLat, startLong);

    User user = userFactory.createUser();
    Trip trip = tripFactory.create(user, user.getStartLocation(), endLocation)
    user.addTrip(trip);
    trip.start();


    return 0;
}