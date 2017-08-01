#include <iostream>

class Truckloads
{
public:
    int numTrucks(int numCrates, int loadSize);
};

int Truckloads::numTrucks(int numCrates, int loadSize)
{
    int pile1;
    int pile2;
    if (numCrates <= loadSize) {
        return 1;
    }
    if (numCrates % 2 == 0) {
        pile1 = numCrates / 2;
        pile2 = numCrates / 2;
    } else {
        pile1 = numCrates / 2;
        pile2 = numCrates / 2 + 1;
    }
    return numTrucks(pile1, loadSize) + numTrucks(pile2, loadSize);
}
