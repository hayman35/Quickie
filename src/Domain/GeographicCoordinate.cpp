#include "../Headers/GeographicCoordinate.h"

class GeographicCoordinate{
    private:
        long latitude;
        long longitude;

    public:
        GeographicCoordinate(long latitude, long longitude){
            this->latitude = latitude;
            this->longitude = longitude;
        }

        long getLatitude(){
            return latitude;
        }

        void setLatitude(long latitude){
            this->latitude = latitude;
        }

        long getLongitude(){
            return longitude;
        }

        void setLongitude(long longitude){
            this->longitude = longitude;
        }
};