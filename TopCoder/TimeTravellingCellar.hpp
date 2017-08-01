#include <vector>
#include <iostream>
class TimeTravellingCellar
{
public:
    int determineProfit(std::vector<int> profit, std::vector<int> decay);
};

int TimeTravellingCellar::determineProfit(std::vector<int> profit, std::vector<int> decay)
{
    int max;
    int max2;
    int maxIndex;
    if (profit.at(1) > profit.at(0)) {
        max = profit.at(1);
        max2 = profit.at(0);
        maxIndex = 1;
    } else {
        max = profit.at(0);
        max2 = profit.at(1);
        maxIndex = 0;
    }

    for (int i = 0; i < profit.size(); i++) {
        if (profit.at(i) > max) {
            max2 = max;
            max = profit.at(i);
            maxIndex = i;
        } else if (profit.at(i) < max && profit.at(i) > max2) {
            max2 = profit.at(i);
        }
    }

    int minIndex;
    int min;
    int min2;
    if (decay.at(1) < decay.at(0)) {
        min = decay.at(1);
        min2 = decay.at(0);
        minIndex = 1;
    } else {
        min = decay.at(0);
        min2 = decay.at(1);
        minIndex = 0;
    }

    for (int i = 0; i < decay.size(); i++) {
        if (decay.at(i) < min) {
            min2 = min;
            min = decay.at(i);
            minIndex = i;
        } else if (decay.at(i) > min && decay.at(i) < min2) {
            min2 = decay.at(i);
        }
    }

    if (maxIndex == minIndex) {
        // std::cout << max << std::endl;
        // std::cout << max2 << std::endl;
        // std::cout << min << std::endl;
        // std::cout << min2 << std::endl;
        if (max2 - min > max - min2) {
            return max2 - min;
        } else {
            return max - min2;
        }
    }
    return max - min;
}
