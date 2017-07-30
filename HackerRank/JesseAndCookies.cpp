#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
#include <functional>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    priority_queue<int, std::vector<int>, std::greater<int> > cookies;

    int N, K, t;
    cin >> N >> K;


    for (int i = 0; i < N; i++) {
      cin >> t;
      cookies.push(t);
    }

    int operations = 0;
    while (cookies.size() > 1 && cookies.top() < K) {
      int t1 = cookies.top();
      cookies.pop();
      int t2 = cookies.top();
      cookies.pop();
      cookies.push(t1 + 2*t2);
      operations++;
    }

    if (cookies.top() < K) cout << "-1" << endl;
    else cout << operations << endl;
    return 0;
}
