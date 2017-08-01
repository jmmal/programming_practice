#include <string>
#include <vector>
#include <algorithm>
#include <iostream>

class LotteryTicket
{
public:
    std::string buy(int price, int b1, int b2, int b3, int b4);
};

std::string LotteryTicket::buy(int price, int b1, int b2, int b3, int b4)
{
    // The following code to generate subsets is provided from the following:
    // http://stackoverflow.com/questions/25501051/using-binary-counting-to-count-all-subsets-of-an-array
    // Thanks to Paul R
    const int num_elems = 4;
    const int elems[num_elems] = { b1, b2, b3, b4 };
    int total = 0;

    for (int s = 1; s < (1 << num_elems); ++s) {
        for (int e = 0; e < num_elems; ++e) {
            if (s & (1 << e)) {
                total += elems[e];
            }
        }
        if (price == total) return "POSSIBLE";
        total = 0;
    }
    return "IMPOSSIBLE";
}
