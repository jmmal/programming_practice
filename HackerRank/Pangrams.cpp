#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    // array that tracks if a letter already used and running total of characters left
    bool arr[26] = {false};
    int count = 0;
    char c;
    cin >> c;
    while (!cin.eof() && count < 26) {
        c = tolower(c);

        // check if the character has been found
        if (!arr[c - 'a']) {
            arr[c - 'a'] = true;
            count++;
        }

        cin >> c;
        if (count == 26) break;
    }

    if (count < 26) cout << "not ";
    cout << "pangram" << endl;
    return 0;
}
