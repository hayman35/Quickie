#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

#include <Poco/Net/HTTPClientSession.h>
#include <Poco/Net/HTTPRequest.h>
#include <Poco/Net/HTTPResponse.h>
#include <Poco/StreamCopier.h>
#include <Poco/Path.h>
#include <Poco/URI.h>
#include <Poco/Exception.h>

#include <iostream>
#include <string>
#include "Headers/Trip.h"
#include "Headers/TripFactory.h"
#include "Headers/UserFactory.h"
#include "Headers/User.h"
#include "Headers/GeographicCoordinate.h"

using namespace Poco::Net;
using namespace Poco;
using namespace std;

void requestRide(User *user) {
    TripFactory* tripFactory = new TripFactory();

    long startLat = 0;
    long startLong = 0;

    std::cout << "Enter starting lat: ";
    std::cin >> startLat;

    std::cout << "Enter starting long: ";
    std::cin >> startLong;

    GeographicCoordinate* endLocation = new GeographicCoordinate(startLat, startLong);

    Trip* trip = tripFactory->create(*user, user->getStartLocation(), *endLocation);
    user->addTrip(trip);
    std::string response = "";
    std::cout << "confirm [Y]es, [N]o? ";
    std::cin >> response;
    if(response == "Y"){
        trip->start();
        std::cout << "Trip Started!";
    } else {
        std::cout << "Trip cancelled" << std::endl;
        user->removeTrip();
    }
}

void setUberType(User *user){
    std::string uberType = "";
    std::cout << "Enter Uber Type (UberX, UberXL, UberBlack): ";
    std::cin >> uberType;
    user->updateUberType(uberType);
    std::cout << std::endl <<"Uber type updated";
}

void getCurrentETA(User *user){
    Trip* trip = user->getTrip();
    std::cout << trip->getTimeEstimate() << std::endl;
}


int main(int argc, char** argv)
{
    try
    {
        // prepare session
        URI uri("http://cs3307uwo.api.stdlib.com/uberestimate@dev/");
        HTTPClientSession session(uri.getHost(), uri.getPort());

        // prepare path
        string path(uri.getPathAndQuery());
        if (path.empty()) {
            path = "/";
        }

        // send request
        HTTPRequest req(HTTPRequest::HTTP_GET, path, HTTPMessage::HTTP_1_1);
        session.sendRequest(req);

        // get response
        HTTPResponse res;
        std::cout << "Status: " << res.getStatus() << endl;
        std:: cout << "Reason: " << res.getReason() << std::endl;

        // print response
        std::istream &is = session.receiveResponse(res);
        StreamCopier::copyStream(is, cout);
    }
    catch (Poco::Exception &ex)
    {
        cout << "ERROR" << endl;
        cerr << ex.displayText() << endl;
        return -1;
    }


//    //Get command
//    //request trip
//
//    int rideRequest = 0;
//    while(true) {
//        std::cout << "Select command" << std::endl;
//        std::cout << "1) Request Ride" << std::endl;
//        std::cout << "2) Set Uber Type" << std::endl;
//        std::cout << "3) Get Current Ride ETA" << std::endl;
//        std::cout << "4) Exit" << std::endl;
//
//        int response = 0;
//        std::cin >> response;
//        if(response != 1 && response != 2 && response != 3 && response != 4) {
//            continue;
//        }
//        if(response == 1) {
//            rideRequest = 1;
//            requestRide(user);
//        } else if(response == 2) {
//            setUberType(user);
//        } else if(response == 3){
//            if(rideRequest == 1){
//                getCurrentETA(user);
//            } else {
//                std::cout << "Please request a ride first" << std::endl;
//            }
//        } else if(response == 4) {
//            break;
//        }
//
//    }
//    return 0;
}