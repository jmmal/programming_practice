#include <vector>
#include <string>

class MooingCows
{
public:
    int dissatisfaction(std::vector<std::string> farmland);
};

int MooingCows::dissatisfaction(std::vector<std::string> farmland)
{
    int min = 1000000000;
    int total;
    for (size_t x = 0; x < farmland.size(); x++) {
        for (size_t y = 0; y < farmland[x].length(); y++) {
            if (farmland[x][y] == 'C') {
                total = 0;
                for (size_t i = 0; i < farmland.size(); i++) {
                    for (size_t j = 0; j < farmland[i].length(); j++) {
                        if (farmland[i][j] == 'C') {
                            total += (x-i)*(x-i) + (y-j)*(y-j);
                        }
                    }
                }
                if (total < min) {
                    min = total;
                }
            }
        }
    }
    return min;
}
