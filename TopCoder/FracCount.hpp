#include <iostream>

class FracCount
{
public:
    int position(int numerator, int denominator);
};

int gcd(int a, int b)
{
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}


int FracCount::position(int numerator, int denominator)
{
    // Is it irreducible? Increase counter
    int numer = 1;
    int denom = 2;
    int count = 1;

    while (true) {
        if (gcd(denom, numer) != 1) {
            numer++;
            if (numer >= denom) {
                numer = 1;
                denom++;
            }
        } else {
            if (numer == numerator && denom == denominator) {
                return count;
            }
            numer++;
            count++;
        }
    }
}
