#include <vector>
#include <iostream>
#include <stdlib.h>

class ProblemsToSolve
{
public:
    int minNumber(std::vector<int> pleasantness, int variety);
};

int ProblemsToSolve::minNumber(std::vector<int> pleasantness, int variety)
{
    int min = pleasantness.size();
    int problems;
    for (size_t i = 0; i < pleasantness.size(); i++) {
        for (size_t j = i + 1; j < pleasantness.size(); j++) {
            if (abs (pleasantness[j] - pleasantness[i]) >= variety) {
                problems = 2;
                if (i > 0) {
                    problems += (i+1)/2;
                }
                problems += (j - i - 1) / 2;
                if (problems < min) {
                    min = problems;
                }

            }
        }
    }
    return min;
}
