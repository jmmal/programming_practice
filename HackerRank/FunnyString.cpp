#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isFunny(string s) {
    int l = s.length();

    for (int i = 1; i < l; i++) {
        if (abs(s[i] - s[i-1]) != abs(s[l - i] - s[l - i - 1])) return false;
    }
    return true;
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int T;
    cin >> T;
    string s;
    for(int i = 0; i < T; i++) {
        cin >> s;
        if (isFunny(s)) cout << "Funny" << endl;
        else cout << "Not Funny" << endl;
    }
    return 0;
}
