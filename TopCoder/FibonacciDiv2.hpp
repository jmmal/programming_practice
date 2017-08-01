// FibonacciDiv2.hpp
#include <math.h>

class FibonacciDiv2
{
public:
    bool isFib(long N);     // Returns whether paramter N is a fibonacci number
    long find(long N);      // Returns the number of iterations number N is from a fibonacci number
};

// Returns true if N is a perfect square
bool isPerfectSquare(long N)
{
    long temp = sqrt(N);
    if (temp*temp == N) {
        return true;
    }
    return false;
}

// Returns true if N is a fibonacci number
bool FibonacciDiv2::isFib(long N)
{
    return isPerfectSquare(5 * N * N + 4) || isPerfectSquare(5 * N * N - 4);
}

// Returns the distance N is from a fibonacci number
long FibonacciDiv2::find(long N)
{
    long iteration = 0;
    while(true) {
        if (isFib(N-iteration) || isFib(N+iteration)) {
            return iteration;
        } else {
            iteration++;
        }
    }
}
