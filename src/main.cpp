#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"
#include <iostream>
#include <string>
#include "Headers/Trip.h"
#include "Headers/TripFactory.h"
#include "Headers/UserFactory.h"
#include "Headers/User.h"
#include "Headers/GeographicCoordinate.h"

void requestRide(User user){
    TripFactory* tripFactory = new TripFactory();

    long startLat = 0;
    long startLong = 0;

    std::cout << "Enter starting lat: ";
    startLat << long(std::cin);

    std::cout << "Enter starting long: ";
    startLong << long(std::cin);

    GeographicCoordinate* endLocation = new GeographicCoordinate(startLat, startLong);

    Trip* trip = tripFactory->create(user, user.getStartLocation(), *endLocation)
    user.addTrip(*trip);
    std::string response = "";
    std::cout << "confirm [Y]es, [N]o? ";
    response << std::cin;
    if(response == "Y"){
        trip.start();
        std::cout << "Trip Started!";
    } else {
        std::cout << "Trip cancelled" << std::endl;
        user.removeTrip();
    }
}

void setUberType(User user){
    std::string uberType = "";
    std::cout << "Enter Uber Type (UberX, UberXL, UberBlack): ";
    uberType << std::cin;
    user.updateUberType(uberType);
    std::cout << std::endl <<"Uber type updated";
}

void getCurrentETA(User user){
    Trip trip = user.getTrip();
    std::cout << trip.getTimeEstimate() << std::endl;
}


int main(int argc, char** argv)
{
    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << "abcdefghijklmnopqrstuvwxyz";
    ds.close();
    std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;

    UserFactory* userFactory = new UserFactory();
    User* user = userFactory->createUser();

    //Get command
    //request trip

    while(true){
        std::cout << "Select command" << std::endl;
        std::cout << "1) Request Ride" << std::endl;
        std::cout << "2) Set Uber Type" << std::endl;
        std::cout << "3) Get Current Ride ETA" << std::endl;
        std::cout << "4) Exit" << std::endl;

        int response;
        response << int(std::cin);
        if(response != 1 && response != 2 && response != 3 && response != 4){
            continue;
        }
        if(response == 1){
            requestRide(*user);
        } else if(response == 2) {
            setUberType(*user);
        } else if(response == 3){
            getCurrentETA(*user);
        } else if(response == 4) {
            break;
        }

    }
    return 0;
}