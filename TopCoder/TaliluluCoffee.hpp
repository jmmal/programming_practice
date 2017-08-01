#include <vector>
#include <algorithm>
#include <iostream>

class TaliluluCoffee
{
public:
    int maxTip(std::vector<int> tips);
};

int TaliluluCoffee::maxTip(std::vector<int> tips)
{
    std::sort(tips.begin(), tips.end());
    int total = 0;
    int temp = 0;
    for (int i = 0; i < tips.size(); i++) {
        temp = tips[tips.size() - 1 - i] - i;
        if (temp > 0) total += temp;
    }

    return total;
}
