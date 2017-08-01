#include <string>
#include <iostream>

class Arrows
{
public:
    int longestArrow(std::string s);
};

int Arrows::longestArrow(std::string s)
{
    int reccuringDashes = 0;
    char nextChar;
    int max = -1;
    int iterator = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '<') {
            reccuringDashes++;
            iterator = i;
            if (iterator < s.length()) {
                nextChar = s[iterator+1];
                iterator++;
                while (iterator < s.length() && s[iterator] == nextChar) {
                    if (s[iterator] == '<' || s[iterator] == '>') {
                        break;
                    }
                    reccuringDashes++;
                    iterator++;
                }
            }
            if (reccuringDashes > max) {
                max = reccuringDashes;
            }
            reccuringDashes = 0;
        } else if (s[i] == '>') {
            reccuringDashes++;
            iterator = i;
            if (iterator > 0) {
                nextChar = s[i-1];
                iterator--;
                while (iterator >= 0 && s[iterator] == nextChar) {
                    if (s[iterator] == '<' || s[iterator] == '>') {
                        break;
                    }
                    reccuringDashes++;
                    iterator--;
                }
            }
            if (reccuringDashes > max) {
                max = reccuringDashes;
            }
            reccuringDashes = 0;
        }
    }
    return max;
}
