#include <string>
#include <sstream>
#include <iostream>
class RunLengthEncoding
{
public:
    std::string decode(std::string text);
};

std::string expand(std::string num, char myChar)
{
    std::stringstream ss(num);
    int times;
    ss >> times;
    std::string finalString;

    if (times > 50) {
        return "TOO LONG";
    }
    for (size_t i = 0; i < times; i++) {
        finalString += myChar;
    }

    return finalString;
}

std::string RunLengthEncoding::decode(std::string text)
{
    std::string finalString;
    std::string number;
    std::string result;
    for (int i = 0; i < text.length(); i++) {
        if (isdigit(text[i])) {
            number += text[i];
        } else if (number.length() > 0) {
            result = expand(number, text[i]);
            if (result == "TOO LONG") return result;
            else finalString += result;
            number = "";
        } else {
            finalString += text[i];
            number = "";
        }

        if (finalString.length() > 50) {
            return "TOO LONG";
        }
    }

    return finalString;
}
