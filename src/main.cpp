
/**
 * @brief Main class
 * @authors Andrew, Kevin, Nirmal, Hayman
 */

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
//#include "Headers/voce.h"


using namespace std;

/**
 * @brief user requests a ride
 * @param user
 */
void requestRide(User *user) {
    TripFactory* tripFactory = new TripFactory();
    UberApiInterface* uber = new UberApiImplementation();

    long startLat = 0;
    long startLong = 0;

    voce::synthesize("Enter ending latitude: ");
    cout << "Enter ending latitude: ";
    cin >> startLat;

    voce::synthesize("Enter ending longitude: ");
    cout << "Enter ending longitude: ";
    cin >> startLong;

    GeographicCoordinate* endLocation = new GeographicCoordinate(startLat, startLong);

    Trip* trip = tripFactory->create(*user, user->getStartLocation(), endLocation);
    trip->setUberType(user->getUberType());

    user->addTrip(trip);
    uber->getFareEstimate(trip);

    voce::synthesize("Trip cost: ");
    voce::synthesize(trip->getFareValue());
    cout << "Trip cost: " << trip->getFareValue() << endl;

    voce::synthesize("Trip time: ");
    voce::synthesize(trip->getTimeEstimate());
    cout << "Trip time: " << trip->getTimeEstimate() << endl;


    string response = "";
    cout << "confirm [Y]es, [N]o? ";
    cin >> response;
    if(response == "Y"){
        uber->rideRequest(trip);
        //pickup, destination, type, payment method, fare estimation
        cout << "Pickup Location Latitude: " << (trip->getStartLocation())->getLatitude() << endl;
        cout << "Pickup Location Longitude: " << (trip->getStartLocation())->getLongitude() << endl;
        //TODO fix pointer
        cout << "Destination Location Latitude: " << (trip->getEndLocation())->getLatitude() << endl;
        cout << "Destination Location Longitude: " << (trip->getEndLocation())->getLongitude() << endl;
        cout << "Driver name: " << trip->getDriverName() << endl;


        cout << "Trip Started! Arriving in " << to_string(trip->getTimeToArrive()) << " seconds" << endl;
    } else {
        voce::synthesize("Trip cancelled");
        cout << "Trip cancelled" << endl;
        user->removeTrip();
    }
}

/**
 * @brief setter method for ubertype
 * @param user
 */
void setUberType(User *user){
    string uberType = "";
    voce::synthesize("Enter Uber Type (uberX, uberXL, BLACK): ");
    cout << "Enter Uber Type (uberX, uberXL, BLACK): ";
    cin >> uberType;
    user->updateUberType(uberType);

    voce::synthesize("Uber type updated");
    cout << endl <<"Uber type updated" << endl;
}

/**
 * @brief getter method for the current estimated time of arrival
 * @param user
 */
void getCurrentETA(User *user){
    Trip* trip = user->getTrip();
    time_t curTime = time(nullptr);
    time_t orderTime = trip->getOrderTime();

    time_t diff = curTime - orderTime;

    double timeToArrivalUpdated = trip->getTimeToArrive() - diff;
    if(timeToArrivalUpdated > 0){
        voce::synthesize(timeToArrivalUpdated);
        voce::synthesize("Uber has arrived!!");
        cout << timeToArrivalUpdated << " seconds until arrival" << endl;
    } else {
        voce::synthesize("Uber has arrived!!");
        cout << "Uber has arrived!!" << endl;
    }

}

/**
 * @brief method to cancel ride
 * @param user
 */
void cancelRide(User *user){
    Trip* trip = user->getTrip();
    UberApiInterface* uber = new UberApiImplementation();
    uber->cancelRideRequest(trip);
    if(trip->getStatus() == "Cancelled"){
        voce::synthesize("Ride cancelled");
        cout << "Ride cancelled" << endl;
    } else {
        voce::synthesize("Could not cancel ride");
        cout << "Could not cancel ride" << endl;
    }
}

/**
 * @brief main method to request or cancel an uber, set an uber type, get the current ride estimated time of arrival or exit the program
 * @param argc
 * @param argv
 * @return 0 is successful
 */
int main(int argc, char** argv){
    voce::init("../../lib", true, false, "", "");
    UserFactory* userFactory = new UserFactory();
    User* user = userFactory->createUser();
    //Get command
    //request trip

    int rideRequest = 0;
    while(true) {
        voce::synthesize("Select command");
        voce::synthesize("1) Request Ride");
        voce::synthesize("2) Set Uber Type");
        voce::synthesize("3) Get Current Ride ETA");
        voce::synthesize("4) Cancel Uber Ride");
        voce::synthesize("5) Exit");

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
                voce::synthesize("Please request a ride first");
                cout << "Please request a ride first" << endl;
            }
        } else if(response == 4) {
            if(rideRequest == 1){
                cancelRide(user);
            } else {
                voce::synthesize("Please request a ride first");
                cout << "Please request a ride first" << endl;
            }
        } else {
            break;
        }

    }
    return 0;
}