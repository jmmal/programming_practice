#include <vector>
#include <string>
#include <iostream>

class PrefixFreeSets
{
public:
    int maxElements(std::vector<std::string> words);
};

bool isPrefix(std::string str1, std::string str2)
{
    for (int i = 0; i < str1.length(); i++) {
        if (str1[i] != str2[i]) return false;
    }
    return true;
}

int PrefixFreeSets::maxElements(std::vector<std::string> words)
{
    int max = words.size();
    std::string smaller;
    std::string larger;

    for (int i = 0; i < words.size(); i++) {
        for (int j = i+1; j < words.size(); j++) {
            if (words[i].length() < words[j].length()) {
                if (isPrefix(words[i],words[j])) {
                    words.erase(words.begin()+i);
                    j = words.size();
                    i--;
                    max--;
                }
            } else {
                if (isPrefix(words[j], words[i])) {
                    words.erase(words.begin()+j);
                    j--;
                    max--;
                }
            }
        }
    }
    return max;
}
