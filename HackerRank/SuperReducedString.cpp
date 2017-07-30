#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char c;
    string s;
    while (cin >> c) {
        s.push_back(c);
    }

    int i = 1;
    int length = s.length();
    while(!s.empty() && i < length) {
        if (s[i] == s[i-1]) {
            s.erase(i   , 1);
            s.erase(i-1 , 1);
            i -= 2;
            length -= 2;
            if (i < 0) i++;
        }
        i++;
    }

    s.empty() ? cout << "Empty String" << endl : cout << s << endl;
    return 0;
}
