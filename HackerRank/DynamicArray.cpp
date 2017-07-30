#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, Q;
    cin >> N >> Q;
    vector< vector<int>> sequences(N, vector<int>(0));

    int query, x, y;
    int lastAnswer = 0;
    for(int i = 0; i < Q; i++) {
        cin >> query >> x >> y;
        if (query == 1) {
            int index = ( (x ^ lastAnswer) % N);
            sequences[index].push_back(y);
        } else if (query == 2) {
            int index = ( (x ^ lastAnswer) % N);
            int mod = y % sequences[index].size();
            lastAnswer = sequences[index][mod];
            cout << lastAnswer << endl;
        } else {
            cout << "query error" << endl;
        }
    }

    return 0;
}
