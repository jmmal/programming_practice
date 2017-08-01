#include <vector>
#include <iostream>
using namespace std;

class CorporationSalary
{
public:
    long totalSalary(std::vector<std::string> relations);
};

long getSalary(std::vector<std::string> &relations, int person, std::vector<long> &salaries)
{
    long total = 0;
    for (size_t i = 0; i < relations.size(); i++) {
        if (relations[person][i] == 'Y') {
            if (salaries[i] == 0) {
                total += getSalary(relations, i, salaries);
            } else {
                total += salaries[i];
            }
        }
    }
    if (total == 0) {
        total = 1;
    }
    salaries[person] = total;
    return total;
}

long CorporationSalary::totalSalary(std::vector<std::string> relations)
{
    long salary = 0;
    std::vector<long> salaries (relations.size(), 0);

    int temp = 0;
    for (size_t i = 0; i < relations.size(); i++) {
        if (salaries[i] != 0) {
            temp += salaries[i];
        } else {
            for (size_t j = 0; j < relations.size(); j++) {
                if (relations[i][j] == 'Y') {
                    if (salaries[j] == 0) {
                        temp += getSalary(relations, j, salaries);
                    } else {
                        temp += salaries[j];
                    }
                }
            }
        }
        if (temp == 0) temp++;
        salary += temp;
        temp = 0;
    }
    return salary;
}
