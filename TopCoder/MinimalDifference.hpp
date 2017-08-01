#include <string>
#include <sstream>

class MinimalDifference
{
public:
    int findNumber(int A, int B, int C);
};

int digitSum(int X)
{
    std::stringstream ss;
    ss << X;
    std::string str;
    ss >> str;
    int sum = 0;
    for (size_t i = 0; i < str.length(); i++) {
        sum += str[i] - '0';
    }
    return sum;
}

int MinimalDifference::findNumber(int A, int B, int C)
{
    int sum;
    int smallest = A;
    int cSum = digitSum(C);
    int digit = digitSum(A);
    sum = abs(cSum - digit);
    for (size_t i = A; i <= B; i++) {
        digit = digitSum(i);
        digit = abs(digit - cSum);
        if (digit < sum) {
            sum = digit;
            smallest = i;
        }
    }
    return smallest;
}
