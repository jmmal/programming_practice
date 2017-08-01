#include <vector>
#include <string>

class Thimbles
{
public:
    int thimbleWithBall(std::vector<std::string> swaps);
};

std::vector<int> swap(std::vector<int> v, int i, int j)
{
    int temp = v[i-1];
    v[i-1] = v[j-1];
    v[j-1] = temp;
    return v;
}

int Thimbles::thimbleWithBall(std::vector<std::string> swaps)
{
    std::vector<int> cups;
    cups.push_back(1);
    cups.push_back(2);
    cups.push_back(3);

    std::string temp;
    for (size_t i = 0; i < swaps.size(); i++) {
        temp = swaps[i];
        cups = swap(cups, temp[0] - '0', temp[2] - '0');
    }

    if (cups[0] == 1) return 1; else
    if (cups[1] == 1) return 2; else
    return 3;
}
