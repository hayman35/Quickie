#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

#include <iostream>
#include "Trip/Trip.cpp"
#include "Trip/TripFactory.cpp"
#include "User/UserFactory.cpp"
#include "User/User.cpp"
#include "Domain/GeographicCoordinate.cpp"

using namespace std;


void requestRide(user){
    TripFactory tripFactory = new TripFactory();

    long startLat = 0;
    long startLong = 0;

    cout << "Enter starting lat: ";
    startLat << cin;

    cout << "Enter starting long: ";
    startLong << cin;

    GeographicCoordinate endLocation = new GeographicCoordinate(startLat, startLong);

    Trip trip = tripFactory.create(user, user.getStartLocation(), endLocation)
    user.addTrip(trip);
    string response = "";
    cout << "confirm [Y]es, [n]o? ";
    response << cin;
    if(response == "Y"){
        trip.start();
        cout << "Trip Started!";
    } else {
        cout << "Trip cancelled" << endl;
        user.removeTrip(Trip);
    }
}

void setUberType(user){
    string uberType = "";
    cout << "Enter Uber Type (UberX, UberXL, UberBlack): ";
    uberType << cin;
    user.updateUberType(uberType);
    cout << endl <<"Uber type updated";
}

void getCurrentETA(user){
    Trip trip = user.getTrip();
    cout << trip.getTimeEstimate() << endl;
}


int main(int argc, char** argv)
{
    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << "abcdefghijklmnopqrstuvwxyz";
    ds.close();
    cout << Poco::DigestEngine::digestToHex(md5.digest()) << endl;

    UserFactory userFactory = new UserFactory();
    User user = userFactory.createUser();

    //Get command
    //request trip

    while(true){
        cout << "Select command" << endl;
        cout << "1) Request Ride" << endl;
        cout << "2) Set Uber Type" << endl;
        cout << "3) Get Current Ride ETA" << endl;

        int response;
        response << cin;
        if(response != 1 && response != 2 && response != 3 && response != 4){
            continue;
        }
        if(response == 1){
            requestRide(user);
        } else if(response == 2) {
            setUberType(user);
        } else {
            getCurrentETA(user);
        }

    }
    return 0;
}