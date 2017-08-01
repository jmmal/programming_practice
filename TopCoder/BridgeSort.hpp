#include <iostream>
#include <string>
#include <ctype.h>

class BridgeSort
{
public:
    std::string sortedHand(std::string hand);
};

bool largerDigit(std::string c1, std::string c2)
{
    if (isalpha(c1[1]) && !isalpha(c2[1])) return true; else
    if (!isalpha(c1[1]) && isalpha(c2[1])) return false; else
    if (isdigit(c1[1]) && isdigit(c2[1])) return c1[1] > c2[1]; else
    if (isalpha(c1[1]) && isalpha(c2[1])) {
        if (c1[1] == 'A') return true;
        else if (c1[1] == 'K') {
            if (c2[1] == 'A') return false;
            else return true;
        }
        else if (c1[1] == 'Q') {
            if (c2[1] == 'K' || c2[1] == 'A') return false;
            else return true;
        }
        else if (c1[1] == 'J') {
            if (c2[1] == 'T') return true;
            else return false;
        }
        else return false;
    }


}

bool isLarger(std::string c1, std::string c2)
{
    if (c1[0] == 'C') {
        if (c2[0] == 'C') return largerDigit(c1, c2);
        else return false;
    }

    else if (c1[0] == 'D') {
        if (c2[0] == 'C') return true; else
        if (c2[0] == 'D') {
            return largerDigit(c1, c2);
        } else return false;
    }

    else if (c1[0] == 'H') {
        if (c2[0] == 'D' || c2[0] == 'C') return true; else
        if (c2[0] == 'H') {
            return largerDigit(c1, c2);
        } else return false;
    }

    else {
        if (c2[0] == 'C' || c2[0] == 'D' || c2[0] == 'H') return true;
        else return largerDigit(c1, c2);
    }


}

std::string swap(std::string hand, int i, int k)
{
    std::string c1 = "";
    c1.append(hand, i, 2);
    std::string c2 = "";
    c2.append(hand, k, 2);
    hand.erase(i, 4);
    hand.insert(i, c2);
    hand.insert(k, c1);
    return hand;
}

std::string BridgeSort::sortedHand(std::string hand)
{
    bool swapped = true;
    int n = hand.length();
    int i = 0;
    while (swapped) {
        swapped = false;
        for (size_t i = 0; i < hand.length() - 2; i += 2) {
            std::string c1 = "";
            c1.append(hand, i, 2);
            std::string c2 = "";
            c2.append(hand, i + 2, 2);
            if (isLarger(c1,c2)) {
                hand = swap(hand, i, i + 2);
                swapped = true;
            } else {
            }
        }
        i++;
        n--;
    }

    return hand;
}
