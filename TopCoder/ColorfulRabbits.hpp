#include <vector>
#include <map>

class ColorfulRabbits
{
public:
    int getMinimum(std::vector<int> replies);
};

int ColorfulRabbits::getMinimum(std::vector<int> replies)
{
    std::map<int,int> myRabbits;
    for (int i = 0; i < replies.size(); i++) {
        myRabbits[replies.at(i)]++;
    }

    int first;
    int second;
    int total = 0;
    std::map<int,int>::iterator it = myRabbits.begin();
    while( it != myRabbits.end() ) {
        first = it->first;
        second = it->second;

        int rabbitsCounted = first + 1;
        total += second/rabbitsCounted * rabbitsCounted;    //only one of the next two statement will do anything
        if (second % rabbitsCounted != 0) total += rabbitsCounted;
        it++;
    }

    return total;
}
