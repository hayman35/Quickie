
class GeographicCoordinate{
    private:
        long latitude;
        long longitude;

    public:
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