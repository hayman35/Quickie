
#include <string.h>
#include <Trip.h>

class UberApiInterface{
    public:
        virtual Trip getFareEstimate(Trip);
        virtual Trip getTripEstimate(Trip);
        virtual Trip rideRequest(Trip);
        virtual Trip cancelRideRequest(Trip);
        virtual Trip getCurrentRide(Trip);

    private:
        string clientID;
        string state;
        string redirectURL;

}