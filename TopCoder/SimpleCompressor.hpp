#include <string>
#include <iostream>

class SimpleCompressor
{
public:
    std::string uncompress(std::string data);
};

std::string expand(std::string input)
{
    std::string expanded;
    int num = input[0] - '0';
    input.erase(input.begin());
    for (size_t i = 0; i < num; i++) {
        expanded += input;
    }
    return expanded;
}

std::string SimpleCompressor::uncompress(std::string data)
{
    std::string finalString;
    std::string temp;

    size_t pos = data.find_last_of('[');
    size_t end = data.find_first_of(']', pos+1);


    while (pos != std::string::npos) {
        temp = expand(data.substr(pos+1, end-pos-1));
        data.erase(pos, end-pos+1);
        data.insert(pos, temp);
        pos = data.find_last_of('[');
        end = data.find_first_of(']', pos+1);
    }

    return data;
}
