// Inchworm.hpp
#include <vector>

class Inchworm
{
public:
    int lunchtime(int branch, int rest, int leaf);
};

// Returns an integer value for the number of times the Inchworm will consume leafs
// based on the branch, rest and leaf values.
int Inchworm::lunchtime(int branch, int rest, int leaf)
{
    int consumptions = 1;
    // Increment the size of rest, and consume a leaf if rest point matches up
    for (int location = rest; location < branch + 1; location += rest) {
        if (location % leaf == 0) {
            consumptions++;
        }
    }
    return consumptions;
}
