#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    stack<string> states;
    states.push("");
    int Q;
    cin >> Q;

    string S;
    int t;    //type of operation
    int k;   //characters to delete to print
    string W;
    for (int i = 0; i < Q; i++) {
      cin >> t;

      switch (t) {
        case 1:
          cin >> W;
          states.push(S);
          S += W;
          break;
        case 2:
          cin >> k;
          states.push(S);
          S.erase(S.length() - k);
          break;
        case 3:
          cin >> k;
          cout << S[k - 1] << endl;
          break;
        case 4:
          S = states.top();
          states.pop();
          break;
        default:
          break;
      }
    }

    return 0;
}
