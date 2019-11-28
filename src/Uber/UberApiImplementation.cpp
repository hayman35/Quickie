#include "../Headers/UberApiImplementation.h"

using namespace std;

void UberApiImplementation::rideRequest(Trip *trip) {

}

void UberApiImplementation::getCurrentRide(Trip *trip) {

}

void UberApiImplementation::getFareEstimate(Trip *trip) {
    UserHttpRequest* requestFactory = new UserHttpRequest();
    Poco::JSON::Object::Ptr object = requestFactory->sendRequest("http://cs3307uwo.api.stdlib.com/uberestimate@dev/");
    Poco::Dynamic::Var prices = object->get("prices");
    Poco::JSON::Array::Ptr prices_array = prices.extract<Poco::JSON::Array::Ptr>();
    Poco::Dynamic::Var single_estimate = prices_array->getObject(0);
    Poco::JSON::Object::Ptr singl_ptr_est = single_estimate.extract<Poco::JSON::Object::Ptr>();

    Poco::Dynamic::Var high_price = singl_ptr_est->get("high_estimate");
    std::string high_price_text = high_price.convert<std::string>();

    Poco::Dynamic::Var duration = singl_ptr_est->get("duration");
    std::string duration_text = duration.convert<std::string>();

    trip->setFareValue(std::stod(high_price_text));
    trip->setTimeEstimate(std::stod(duration_text));

    cout << trip->getFareValue() << endl;
    cout << trip->getTimeEstimate() << endl;
}

void UberApiImplementation::cancelRideRequest(Trip *trip) {

}
