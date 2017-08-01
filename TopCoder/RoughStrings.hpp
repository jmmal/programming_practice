#include <iostream>
#include <algorithm>
#include <vector>

class RoughStrings
{
public:
    int minRoughness(std::string s, int n);
};

int RoughStrings::minRoughness(std::string s, int n)
{
    int maxChar = 0;
    int minChar = 51;
    std::vector<int> counter (26,0);

    for (size_t i = 0; i < s.length(); i++) counter[s[i]-'a']++;

    for (size_t i = 0; i < counter.size(); i++) {
        if (counter[i] != 0 && counter[i] < minChar) minChar = counter[i];
        if (counter[i] != 0 && counter[i] > maxChar) maxChar = counter[i];
    }

    return std::max(0, maxChar - minChar - n);
}
