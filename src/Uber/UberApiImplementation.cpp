#include "../Headers/UberApiImplementation.h"

using namespace std;

void UberApiImplementation::rideRequest(Trip *trip) {
    UserHttpRequest* requestFactory = new UserHttpRequest();
    Poco::JSON::Object::Ptr object = requestFactory->sendRequest("http://cs3307uwo.api.stdlib.com/uberrequests@dev/");
    Poco::Dynamic::Var fare = object->get("fare");
    Poco::JSON::Object::Ptr fare_extracted = fare.extract<Poco::JSON::Object::Ptr>();

    Poco::Dynamic::Var pickup_estimate = object->get("pickup_estimate");
    std::string pickup_text = pickup_estimate.convert<std::string>();
    trip->setStatus("Arriving");
    trip->setTimeToArrive(std::stod(pickup_text)*60);
    trip->setOrderTime(std::time(nullptr));
}

void UberApiImplementation::getFareEstimate(Trip *trip) {
    UserHttpRequest* requestFactory = new UserHttpRequest();
    std::string uberType = trip->getUberType();
    Poco::JSON::Object::Ptr object = requestFactory->sendRequest("http://cs3307uwo.api.stdlib.com/uberestimate@dev/?uberType="+uberType);
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

}

void UberApiImplementation::cancelRideRequest(Trip *trip) {
    UserHttpRequest* requestFactory = new UserHttpRequest();
    Poco::JSON::Object::Ptr object = requestFactory->sendRequest("http://cs3307uwo.api.stdlib.com/uberCancel@dev/");
    Poco::Dynamic::Var status = object->get("status");
    std::string status_text = status.convert<std::string>();
    trip->setStatus(status_text);
}
