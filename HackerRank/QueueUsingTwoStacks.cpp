#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

void print(stack<int> a) {
  while (true) {
    int t = a.top();
    a.pop();
    if (a.empty()) {
      cout << t << endl;
      return;
    }
  }
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    int t;
    stack<int> inbox;
    stack<int> outbox;

    for (int i = 0; i < q; i++) {
      cin >> t;

      switch (t) {
        case 1:
          cin >> t;
          inbox.push(t);
          break;
        case 2:
        case 3:
          if (outbox.empty()) {
            while (!inbox.empty()) {
              outbox.push(inbox.top());
              inbox.pop();
            }
          }

          if (!outbox.empty()) {
            if (t == 2) outbox.pop();
            if (t == 3) cout << outbox.top() << endl;
          }
          break;
        default:
          break;
      }
    }
    return 0;
}
