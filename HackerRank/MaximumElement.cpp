#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
#include <set>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<int> values;
    stack<int> max;

    int N;
    int type;
    int x;
    cin >> N;

    for (int i = 0; i < N; i++) {
      cin >> type;
      switch (type) {
        case 1:
          cin >> x;
          values.push(x);
          if (max.empty() || x > max.top()) max.push(x);
          else max.push(max.top());
          break;
        case 2:
          values.pop();
          max.pop();
          break;
        case 3:
          cout << max.top() << endl;
          break;
        default:
          break;
      }
    }
    return 0;
}
