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
    Poco::JSON::Object::Ptr low_val_obj = single_estimate.extract<Poco::JSON::Object::Ptr>();
    Poco::Dynamic::Var high_price = low_val_obj->get("high_estimate");
    std::string high_price_text = high_price.convert<std::string>();
    trip->setFareValue(std::stod(high_price_text));
    cout << trip->getFareValue() << endl;
}

void UberApiImplementation::getTripEstimate(Trip *trip) {
    UserHttpRequest* requestFactory = new UserHttpRequest();
    Poco::JSON::Object::Ptr object = requestFactory->sendRequest("http://cs3307uwo.api.stdlib.com/uberestimate@dev/");
    Poco::Dynamic::Var test = object->get("prices");
    cout << test.convert<std::string>() << endl;
}

void UberApiImplementation::cancelRideRequest(Trip *trip) {

}
