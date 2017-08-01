#include <vector>
#include <string>
#include <iostream>

class PaternityTest
{
public:
    std::vector<int> possibleFathers(std::string child, std::string mother, std::vector<std::string> men);
};

std::vector<int> PaternityTest::possibleFathers(std::string child, std::string mother, std::vector<std::string> men)
{
    std::vector<int> fathers;
    std::string father;
    int matches;
    bool match;
    for (size_t i = 0; i < men.size(); i++) {
        father = men[i];
        matches = 0;
        match = true;
        for (size_t j = 0; j < child.length(); j++) {
            // Does the character match the father?
            if (father[j] != child[j]) {
                if (child[j] != mother[j]) {
                    match = false;
                    break;
                }
            } else {
                matches++;
            }
        }
        if (match && matches >= father.size() / 2) {
            fathers.push_back(i);
        }
    }


    return fathers;
}
