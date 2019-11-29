/**
 * @brief Header file for Geographic Coordinate
 * @author Andrew and Kevin 
 */
#ifndef QUICKIE_GEOGRAPHICCOORDINATE_H
#define QUICKIE_GEOGRAPHICCOORDINATE_H
class GeographicCoordinate {
    private:
        long latitude; /**< Stores the value of latitude*/
        long longitude;/**< Stores the value of longitude*/

    public:
        /** @brief Method uses the coordinates to store them into the local
         * @param long latitude 
         * @param long longitude
        */
        GeographicCoordinate(long latitude, long longitude);

        /** @brief Getter Method to get the Latitude
         * @returns long latitude 
        */
        long getLatitude();

        /** @brief Setter Method to set the Latitude
         * @param long latitude
        */
        void setLatitude(long latitude);

        /** @brief Getter Method to get the Longitude
         * @returns long longitude
        */
        long getLongitude();

        /** @brief Setter Method to set the Longitude
         * @param long longitude
        */
        void setLongitude(long longitude);
};

#endif //QUICKIE_GEOGRAPHICCOORDINATE_H
