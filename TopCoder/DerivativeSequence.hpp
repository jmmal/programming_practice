// DerivativeSequence.hpp
#include <vector>

class DerivativeSequence
{
public:
    std::vector<int> derSeq(std::vector<int> a, int n);
};

std::vector<int> DerivativeSequence::derSeq(std::vector<int> a, int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < a.size() - 1; j++) {
            a.at(j) = a.at(j+1) - a.at(j);
        }
        a.pop_back();
    }

    return a;
}
