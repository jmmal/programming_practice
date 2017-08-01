#include <vector>
#include <iostream>
#include <stdlib.h>

class HouseBuilding
{
public:
    int getMinimum(std::vector<std::string> area);
};

int HouseBuilding::getMinimum(std::vector<std::string> area)
{
    std::string level;
    int minimumEffort = 45000;
    int effort;
    for (int i = 0; i < 10; i++) {
        effort = 0;
        for (int j = 0; j < area.size(); j++) {
            level = area[j];
            for (int k = 0; k < level.length(); k++) {
                if (level[k]-'0' < i) {
                    effort += abs(level[k]-'0'- i);
                } else if (level[k] - '0' > i) {
                    effort += abs(level[k]-'0' - i) - 1;
                }
            }
        }
        if (effort < minimumEffort) {
            minimumEffort = effort;
        }
    }

    return minimumEffort;
}
