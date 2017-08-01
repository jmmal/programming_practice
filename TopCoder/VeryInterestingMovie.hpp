#include <vector>
#include <string>

class VeryInterestingMovie
{
public:
    int maximumPupils(std::vector<std::string> seats);
};

int howMany(std::string row)
{
    int seats = 0;
    bool leftOccupied = false;
    if (row[0] == 'Y') {
        seats++;
        leftOccupied = true;
    }

    for (size_t i = 1; i < row.length(); i++) {
        if (!leftOccupied && row[i] == 'Y') {
            seats++;
            leftOccupied = true;
        } else {
            leftOccupied = false;
        }
    }

    return seats;
}
int VeryInterestingMovie::maximumPupils(std::vector<std::string> seats)
{
    int total = 0;
    for (int i = 0; i < seats.size(); i++) {
        total += howMany(seats[i]);
    }
    return total;
}
