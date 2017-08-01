#include <string>

class BlackAndRed
{
public:
    int cut(std::string deck);
};

int BlackAndRed::cut(std::string deck)
{
    int start = 0;
    int numRed = 0;
    int numBlack = 0;
    for (int i = 0; i < deck.length(); i++) {
        if (deck[i] == 'R') {
            numRed++;
        } else if (deck[i] == 'B') {
            numBlack++;
        }

        if (numRed > numBlack) {
            start = i + 1;
            numRed = 0;
            numBlack = 0;
        }
    }

    return start;
}
