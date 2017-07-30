#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N, M;
    int a, b, k;

    cin >> N >> M;
    vector<long long int> lst(N, 0);
    for (int i = 1; i <= M; i++) {
        cin >> a >> b >> k;
        lst[a-1] += k;
        lst[b] -= k;
    }

    long sum = 0;
    long max = 0;
    for (int i = 0; i < N; i++) {
        sum += lst[i];
        if (sum > max) max = sum;
    }

    cout << max << endl;
    return 0;
}
