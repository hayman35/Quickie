#include "../Headers/UberDummyApiInterface.h"
#include "Poco/Net/HTTPRequest.h"

void rideRequest(Trip *trip) {
    HTTPClientSession session("yourdomain.com");
    session.setKeepAlive(true);

    Poco::Net::HTTPRequest req(Poco::Net::HTTPRequest::HTTP_POST, "/myapi.php/api/validate", HTTPMessage::HTTP_1_1);
    req.setContentType("application/x-www-form-urlencoded");
    req.setKeepAlive(true); // notice setKeepAlive is also called on session (above)

    std::string reqBody("username=user1@yourdomain.com&password=mypword");
    req.setContentLength( reqBody.length() );

    std::ostream& myOStream = session.sendRequest(req); // sends request, returns open stream
    myOStream << reqBody;  // sends the body

    req.write(std::cout);

    Poco::Net::HTTPResponse res;
    std::istream& iStr = session.receiveResponse(res);  // get the response from server
    std::cerr << iStr.rdbuf();  // dump server response so you can view it
}

void getCurrentRide(Trip *trip) {

}

void getFareEstimate(Trip *trip) {

}

void getTripEstimate(Trip *trip) {

}

void cancelRideRequest(Trip *trip) {

}
