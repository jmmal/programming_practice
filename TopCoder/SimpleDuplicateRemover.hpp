#include <vector>
#include <map>

class SimpleDuplicateRemover
{
public:
    std::vector<int> process(std::vector<int> sequence);
};

std::vector<int> SimpleDuplicateRemover::process(std::vector<int> sequence)
{
    std::map<int, int> mymap;
    for (int i = sequence.size() - 1; i >= 0; i--) {
        if (mymap.find(sequence.at(i)) != mymap.end()) {
            sequence.erase(sequence.begin() + i);
        } else {
            mymap.insert(std::pair<int,int>(sequence.at(i), sequence.at(i)));
        }
    }
    return sequence;
}
