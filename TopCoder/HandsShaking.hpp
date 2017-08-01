#include <iostream>
#include <vector>

class HandsShaking
{
public:
    long countPerfect(int n);
};

long HandsShaking::countPerfect(int n)
{
    std::vector<long> perfectShakes (2*n, 0);
    perfectShakes[0] = 1;

    for (size_t i = 2; i <= n; i += 2) {
        for (size_t j = 1; j < i; j++) {
            perfectShakes[i] += perfectShakes[j-1] * perfectShakes[i-j-1];
        }
    }

    return perfectShakes[n];
}
