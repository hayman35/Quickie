#include <string.h>

#ifndef QUICKIE_GEOGRAPHICCOORDINATE_H
#define QUICKIE_GEOGRAPHICCOORDINATE_H

class GeographicCoordinate {
    private:
        long latitude;
        long longitude;

    public:
        GeographicCoordinate(long *latitude, long *longitude);

        long getLatitude();

        void setLatitude(long *latitude);

        long getLongitude();

        void setLongitude(long *longitude);
};

#endif //QUICKIE_GEOGRAPHICCOORDINATE_H
