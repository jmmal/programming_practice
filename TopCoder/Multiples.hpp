#include <cmath>
#include <iostream>

class Multiples
{
public:
    int number(int min, int max, int factor);
};

int Multiples::number(int min, int max, int factor)
{
    int B = max / factor;
    int A = min / factor;
    if (min <= 0 && max > 0) B++; else
    if (min % factor == 0 && min > 0) A--;
    return B - A;
}
