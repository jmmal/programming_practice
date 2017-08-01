#include <math.h>

class RugSizes
{
public:
    int rugCount(int area);
};

int RugSizes::rugCount(int area)
{
    int factors = 0;
    int i = 1;
    int root = sqrt(area);
    if (root*root == area) {
        factors++;
    }

    while (i < area/i) {
        if (area % i == 0 && !(i % 2 == 0 && area/i % 2 == 0) ) {
            factors++;
        }
        i++;
    }

    return factors;
}
