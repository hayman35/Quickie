#include <string>
#include "../Headers/GeographicCoordinate.h"
#include "../Headers/Trip.h"

virtual std::string Trip::getStatus() {}
virtual void Trip::setStatus(std::string status) {}
virtual void Trip::setFareValue(double fareValue) {}
virtual double Trip::getDistance() {}
virtual void Trip::setDistance(double distance) {}
virtual double Trip::getTimeEstimate() {}
virtual void Trip::etTimeEstimate(double timeEstimate) {}
virtual std::string Trip::getDistanceUnit() {}
virtual void Trip::setDistanceUnit(std::string distanceUnit) {}
virtual GeographicCoordinate Trip::getStartLocation() {}
virtual void Trip::setStartLocation(GeographicCoordinate startLocation) {}
virtual GeographicCoordinate Trip::getEndLocation() {}
virtual void Trip::setEndLocation(GeographicCoordinate endLocation) {}
virtual void Trip::start() {}
