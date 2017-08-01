// EggCartons.hpp
class EggCartons
{
public:
    int minCartons(int n);
};

// Returns the minimum number of egg cartons to collect n eggs
int EggCartons::minCartons(int n)
{
    // Odd number of eggs or less than 6
    if (n % 2 != 0 || n < 6) {
        return -1;
    }

    int num6 = 0;
    int num8 = 0;
    int eggsLeft = n;

    // Loop continuosly taking 6 eggs until we can fill 8-egg-cartons with the
    // remaining eggs
    while (true) {
        // Not a multiple of 8, remove 6 eggs
        if (eggsLeft % 8 != 0) {
            eggsLeft -= 6;
            num6++;
        }
        // Between 0 and 6 eggs = can't be done
        else if (eggsLeft < 6 && eggsLeft != 0) {
            return -1;
        }
        // Place the rest into 8-egg-cartons and return the total
        else {
            num8 = eggsLeft / 8;
            return num8 + num6;
        }
    }
}
