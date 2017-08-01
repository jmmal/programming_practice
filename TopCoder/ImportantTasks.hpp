#include <vector>

class ImportantTasks
{
public:
    int maximalCost(std::vector<int> complexity, std::vector<int> computers);
};

std::vector<int> merge(std::vector<int> left, std::vector<int> right)
{
    std::vector<int> result;

    while (left.size() != 0 && right.size() != 0) {
        if (left.at(0) <= right.at(0)) {
            result.push_back(left.at(0));
            left.erase(left.begin());
        } else {
            result.push_back(right.at(0));
            right.erase(right.begin());
        }
    }

    while (left.size() > 0) {
        result.push_back(left.at(0));
        left.erase(left.begin());
    }
    while (right.size() > 0) {
        result.push_back(right.at(0));
        right.erase(right.begin());
    }
    return result;
}

std::vector<int> mergesort(std::vector<int> a)
{
    if (a.size() <= 1) return a;

    std::vector<int> left;
    std::vector<int> right;

    for (int i = 0; i < a.size(); i++) {
        if (i % 2 == 0) {
            right.push_back(a.at(i));
        } else {
            left.push_back(a.at(i));
        }
    }

    left = mergesort(left);
    right = mergesort(right);

    return merge(left, right);
}

int ImportantTasks::maximalCost(std::vector<int> complexity, std::vector<int> computers)
{
    complexity = mergesort(complexity);
    computers = mergesort(computers);

    int tasksIter = complexity.size() - 1;
    int computerIter = computers.size() - 1;
    int complete = 0;
    while (tasksIter >= 0 && computerIter >= 0) {
        if (complexity.at(tasksIter) <= computers.at(computerIter)) {
            complete++;
            computerIter--;
        }
        tasksIter--;
    }

    return complete;
}
