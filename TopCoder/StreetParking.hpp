// StreetParking.hpp
#include <string>

class StreetParking
{
public:
    int freeParks(std::string street);
};

// Returns the number of free parks based on the parameter street
int StreetParking::freeParks(std::string street)
{
    int len = street.length();
    for (size_t i = 0; i < len; i++) {
        // Ignore if at driveway
        if (street.at(i) == 'D') {}

        else if (street.at(i) == 'S') {
            // Mark parks unavailable that are either side of a side-streeet
            if (i > 0 && street.at(i-1) == '-') {
                street.at(i-1) = 'x';
            }

            if (i < len - 1 && street.at(i+1) == '-') {
                street.at(i+1) = 'x';
            }
        }

        else if (street.at(i) == 'B') {
            // Mark 10m before busstop as unavailable for parking
            if (i > 1 && street.at(i-2) == '-') {
                street.at(i-2) = 'x';
            }

            if (i > 0 && street.at(i-1) == '-') {
                street.at(i-1) = 'x';
            }
        }
    }
    // Count the number of available parks and return
    int parks = 0;
    for (size_t i = 0; i < len; i++) {
        if (street.at(i) == '-') {
            parks++;
        }
    }
    return parks;
}
