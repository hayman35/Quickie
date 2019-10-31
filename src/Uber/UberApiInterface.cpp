
#include <string.h>
#include "../Trip/Trip.cpp"

class UberApiInterface{
    public:
        Trip getFareEstimate(Trip);
        Trip getTripEstimate(Trip);
        Trip rideRequest(Trip);
        Trip cancelRideRequest(Trip);
        Trip getCurrentRide(Trip);

    private:
        string clientID;
        string state;
        string redirectURL;

}