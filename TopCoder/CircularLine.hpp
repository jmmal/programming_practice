#include <vector>

class CircularLine
{
public:
    int longestTravel(std::vector<int> t);
};

int CircularLine::longestTravel(std::vector<int> t)
{
    // Initialise variable such that the first case will override them
    int min = 0;
    int max = - 1;

    int currentStop = 0;
    int nextStop = 1;
    int counter1;
    int sum1;
    int counter2;
    int sum2;

    while (currentStop < t.size() - 1) {
        while (nextStop < t.size()) {
            sum1 = 0;
            sum2 = 0;
            counter1 = currentStop;
            counter2 = currentStop;

            // Check forwards loop
            while (counter1 != nextStop) {
                sum1 += t.at(counter1);
                counter1++;
            }

            // Check the reverse
            while (counter2 != nextStop) {
                counter2--;
                if (counter2 < 0) {
                    counter2 = t.size() - 1;
                }
                sum2 += t.at(counter2);
            }

            // What is smaller?
            if (sum1 > sum2) {
                min = sum2;
            } else {
                min = sum1;
            }

            if (min > max) {
                max = min;
            }
            nextStop++;
        }

        min = 0;
        currentStop++;
        nextStop = currentStop + 1;
    }
    return max;
}
