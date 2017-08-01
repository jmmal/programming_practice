// ElevatorLimit.hpp
#include <vector>
#include <iostream>
class ElevatorLimit
{
public:
    std::vector<int> getRange(std::vector<int> enter, std::vector<int> exit, int physicalLimit);
};

std::vector<int> ElevatorLimit::getRange(std::vector<int> enter, std::vector<int> exit, int physicalLimit) {
    int total = 0;
    int minimum = 0;
    int maximum = 0;
    std::vector<int> minMax;

    for (int i = 0; i < enter.size(); i++) {
        total -= exit.at(i);

        // If we have a new minimum number
        if (total < minimum) {
            minimum = total;
        }
        if (total < -physicalLimit) {
            return minMax;
        }

        total += enter.at(i);
        if (total > maximum) {
            maximum = total;
        }

        // Bounds checking. If physical limit is exceeded.
        if (total > physicalLimit || enter.at(i) > physicalLimit) {
            return minMax;
        }
    }


    minMax.push_back(-minimum);
    minMax.push_back(physicalLimit-maximum);
    return minMax;
}
