#include <iostream>

class RockStar
{
public:
    int getNumSongs(int ff, int fs, int sf, int ss);
};

int RockStar::getNumSongs(int ff, int fs, int sf, int ss)
{
    int count = 0;

    if (ff > 0 || fs > 0) {
        if (ff > 0) {
            count += ff;
        }

        if (fs > 0) {
            count += std::min(fs, sf) * 2;
            count += ss;
            if (fs > sf) {
                count++;
            }
        }
    } else {
        count += ss;
        if (sf > 1) count++;
    }

    return count;
}
