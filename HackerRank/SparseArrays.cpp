#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N;
    cin >> N;
    string t;

    unordered_map<string, size_t> freq;
    for (int i = 0; i < N; i++) {
        cin >> t;
        freq[t]++;
    }

    int Q;
    cin >> Q;
    for (int i = 0; i < Q; i++) {
        cin >> t;
        cout << freq[t] << endl;
    }

    return 0;
}
