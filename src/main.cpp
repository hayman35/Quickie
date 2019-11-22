#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"
#include "Poco/Net/HTTPClientSession.h"
#include <iostream>
#include <string>
#include "Headers/Trip.h"
#include "Headers/TripFactory.h"
#include "Headers/UserFactory.h"
#include "Headers/User.h"
#include "Headers/GeographicCoordinate.h"

void requestRide(User *user){
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
//    Poco::MD5Engine md5;
//    Poco::DigestOutputStream ds(md5);
//    ds << "abcdefghijklmnopqrstuvwxyz";
//    ds.close();
//    std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;

    Poco::Net::HTTPClientSession* session = Poco::Net::HTTPSessionFactory::defaultFactory().createClientSession("https://webhook.site/4f41a6f6-a403-42e9-8025-070d9316b825");
    Poco::Net::HTTPRequest request(Poco::Net::HTTPRequest::HTTP_POST, serverUri.getPathAndQuery(), Poco::Net::HTTPMessage::HTTP_1_1);

    Poco::Net::HTMLForm form;
    form.add("test_id", "123");
    form.prepareSubmit(request);

    std::ostream& requestStream = session->sendRequest(request);
    form.write(requestStream);

    Poco::Net::HTTPResponse response;
    std::istream& responseStream = session->receiveResponse(response);
    std::stringstream rawJson;
    Poco::StreamCopier::copyStream(responseStream, rawJson);

    UserFactory* userFactory = new UserFactory();
    User* user = userFactory->createUser();

    //Get command
    //request trip

    int rideRequest = 0;
    while(true){
        std::cout << "Select command" << std::endl;
        std::cout << "1) Request Ride" << std::endl;
        std::cout << "2) Set Uber Type" << std::endl;
        std::cout << "3) Get Current Ride ETA" << std::endl;
        std::cout << "4) Exit" << std::endl;

        int response = 0;
        std::cin >> response;
        if(response != 1 && response != 2 && response != 3 && response != 4){
            continue;
        }
        if(response == 1){
            rideRequest = 1;
            requestRide(user);
        } else if(response == 2) {
            setUberType(user);
        } else if(response == 3){
            if(rideRequest == 1){
                getCurrentETA(user);
            } else {
                std::cout << "Please request a ride first" << std::endl;
            }
        } else if(response == 4) {
            break;
        }

    }
    return 0;
}