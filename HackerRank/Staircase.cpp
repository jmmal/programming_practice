#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main(){
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {
        string spaces(n - i, ' ');
        string hashes(i, '#');
        cout << spaces << hashes << endl;
    }
    return 0;
}
