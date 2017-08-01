#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

class BigBurger
{
public:
    int maxWait(std::vector<int> arrival, std::vector<int> service);
};

int BigBurger::maxWait(std::vector<int> arrival, std::vector<int> service)
{
    if (arrival.size() == 1) return 0;
    int max = 0;
    std::vector<int> leave;
    leave.push_back(arrival[0]+service[0]);
    int serviceTime = 0;
    for (size_t i = 1; i < arrival.size(); i++) {
        if (leave[i-1] < arrival[i]) serviceTime = arrival[i];
        else serviceTime = leave[i-1];
        max = std::max(max, serviceTime - arrival[i]);
        leave.push_back(serviceTime+service[i]);
    }

    return max;
}
