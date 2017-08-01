#include <vector>
#include <iostream>
#include <sstream>
#include <string>

class FriendlySequences
{
public:
    int count(std::vector<int> array);
};

bool areFriends(int a, int b)
{

    std::stringstream ss;
    ss << a;
    std::string aString = ss.str();

    std::stringstream ss2;
    ss2 << b;
    std::string bString = ss2.str();

    // This is a vector with 10 indexes. Used to see if there are mismatched digits.
    std::vector<int> digits;
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);
    digits.push_back(0);

    // Increase the corresponding digits index to indicate the occurence of such
    // digit
    for (int i = 0; i < aString.length(); i++) {
        digits.at(aString[i]-'0')++;
    }

    for (int j = 0; j < bString.length(); j++) {
        if (digits.at(bString[j] - '0') != 0) {
            digits.at(bString[j] - '0') = -1;
        } else {
            return false;
        }
    }

    for (int i = 0; i < digits.size(); i++) {
        if (digits.at(i) > 0) {
            return false;
        }
    }
    return true;
}


int FriendlySequences::count(std::vector<int> array)
{
    int friends = 0;
    int first = 0;
    int second = 1;
    if (array.size() == 0) {
         return 0;
    }
    while (first < array.size()-1) {
        if (areFriends(array.at(first),array.at(second))) {
            friends += (second - first);
            second++;
            if (second >= array.size()) {
                return friends;
            }
        } else {
            first = second;
            second = first + 1;
        }
    }

    return friends;
}
