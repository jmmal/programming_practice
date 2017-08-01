#include <vector>
#include <sstream>
#include <string>
#include <algorithm>
#include <iostream>
class MatchNumbersEasy
{
public:
    std::string maxNumber(std::vector<int> matches, int n);
};

std::vector<std::string> results;

void init() {
    for (size_t i = 0; i < 50; i++) {
        results.push_back("");
    }
}

std::string toString(long n) {
    std::stringstream ss;
    ss << n;
    return ss.str();
}

std::string MatchNumbersEasy::maxNumber(std::vector<int> matches, int n)
{
    init();
    std::string temp;
    std::string tempMax;
    for (size_t i = 0; i <= n; i++) {
        temp = "";
        for (size_t j = 0; j < matches.size(); j++) {
            if (matches[j] <= i) {
                temp = toString(j) + results[i - matches[j]];
                std::sort (temp.begin(), temp.end());
                std::reverse(temp.begin(), temp.end());
                if (temp.size() > tempMax.size() && temp[0] != '0') {
                    tempMax = temp;
                    results[i] = tempMax;
                } else if (temp.size() == tempMax.size() && temp.compare(tempMax) > 0) {
                    tempMax = temp;
                }
            }
        }
        results[i] = tempMax;
        tempMax = "";
    }
    if (results[n] == "") {
        return "0";
    }
    return results[n];
}
