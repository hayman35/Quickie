
#include <iostream>
#include <string>
#include "Headers/Trip.h"
#include "Headers/TripFactory.h"
#include "Headers/UserFactory.h"
#include "Headers/User.h"
#include "Headers/GeographicCoordinate.h"
#include "Headers/UserHttpRequest.h"
#include "Headers/UberApiInterface.h"
#include "Headers/UberApiImplementation.h"


using namespace std;

void requestRide(User *user) {
    TripFactory* tripFactory = new TripFactory();
    UberApiInterface* uber = new UberApiImplementation();

    long startLat = 0;
    long startLong = 0;

    cout << "Enter starting lat: ";
    cin >> startLat;

    cout << "Enter starting long: ";
    cin >> startLong;

    GeographicCoordinate* endLocation = new GeographicCoordinate(startLat, startLong);

    Trip* trip = tripFactory->create(*user, user->getStartLocation(), *endLocation);
    trip->setUberType(user->getUberType());

    user->addTrip(trip);
    uber->getFareEstimate(trip);

    cout << "Trip cost: " << trip->getFareValue() << endl;
    cout << "Trip time" << trip->getTimeEstimate() << endl;


    string response = "";
    cout << "confirm [Y]es, [N]o? ";
    cin >> response;
    if(response == "Y"){
        uber->rideRequest(trip);
        cout << "Trip Started! Arriving in " << to_string(trip->getTimeToArrive()) << " seconds" << endl;
    } else {
        cout << "Trip cancelled" << endl;
        user->removeTrip();
    }
}

void setUberType(User *user){
    string uberType = "";
    cout << "Enter Uber Type (uberX, uberXL, BLACK): ";
    cin >> uberType;
    user->updateUberType(uberType);
    cout << endl <<"Uber type updated";
}

void getCurrentETA(User *user){
    Trip* trip = user->getTrip();
    time_t curTime = time(nullptr);
    time_t orderTime = trip->getOrderTime();

    time_t diff = curTime - orderTime;

    double timeToArrivalUpdated = trip->getTimeToArrive() - diff;
    if(timeToArrivalUpdated > 0){
        cout << timeToArrivalUpdated << " seconds until arrival" << endl;
    } else {
        cout << "Uber has arrived!!" << endl;
    }

}

void cancelRide(User *user){
    Trip* trip = user->getTrip();
    UberApiInterface* uber = new UberApiImplementation();
    uber->cancelRideRequest(trip);
    if(trip->getStatus() == "Cancelled"){
        cout << "Ride cancelled" << endl;
    } else {
        cout << "Could not cancel ride" << endl;
    }
}


int main(int argc, char** argv){

    UserFactory* userFactory = new UserFactory();
    User* user = userFactory->createUser();
    //Get command
    //request trip

    int rideRequest = 0;
    while(true) {
        cout << "Select command" << endl;
        cout << "1) Request Ride" << endl;
        cout << "2) Set Uber Type" << endl;
        cout << "3) Get Current Ride ETA" << endl;
        cout << "4) Cancel Uber Ride" << endl;
        cout << "5) Exit" << endl;

        string response_text = "";
        cin >> response_text;
        int response = stoi(response_text);
        if(response != 1 && response != 2 && response != 3 && response != 4 && response != 5) {
            continue;
        }
        if(response == 1) {
            rideRequest = 1;
            requestRide(user);
        } else if(response == 2) {
            setUberType(user);
        } else if(response == 3){
            if(rideRequest == 1){
                getCurrentETA(user);
            } else {
                cout << "Please request a ride first" << endl;
            }
        } else if(response == 4) {
            if(rideRequest == 1){
                cancelRide(user);
            } else {
                cout << "Please request a ride first" << endl;
            }
        } else {
            break;
        }

    }
    return 0;
}