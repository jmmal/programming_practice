#include <string>
#include <algorithm>

class BlackAndWhiteSolitaire
{
public:
    int minimumTurns(std::string cardFront);
};

int BlackAndWhiteSolitaire::minimumTurns(std::string cardFront)
{
    int BWBW = 0;
    int WBWB = 0;
    for (int i = 0; i < cardFront.length(); i++) {
        // BWBW...
        if (i % 2 == 0) {
            // BWBW
            if (cardFront[i] != 'B') BWBW++;
            if (cardFront[i] != 'W') WBWB++;
        }

        if (i % 2 != 0) {
            if (cardFront[i] != 'B') WBWB++;
            if (cardFront[i] != 'W') BWBW++;
        }
    }

    return std::min(BWBW, WBWB);
}
