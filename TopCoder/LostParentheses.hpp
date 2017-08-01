#include <string>
#include <iostream>
#include <sstream>

class LostParentheses
{
public:
    int minResult(std::string e);
};

int toString(std::string num)
{
    std::stringstream ss(num);
    int i;
    ss >> i;
    return i;
}

int LostParentheses::minResult(std::string e)
{
    int min = 0;
    bool subtracting = false;
    char c;
    std::string num = "";
    for (size_t i = 0; i < e.length(); i++) {
        c = e[i];
        if (isdigit(c)) num.append(1,c);
        else {
            if (subtracting) min -= toString(num);
            else min += toString(num);
            if (c == '-') subtracting = true;
            num.clear();
        }
    }
    if (subtracting) min -= toString(num);
    else min += toString(num);

    return min;
}
