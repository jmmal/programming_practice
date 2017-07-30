#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

string isBalanced(string s) {
        stack<char> brackets;
        for (int i = 0; i < s.length(); i++) {
          char c = s[i];

          switch (c) {
            case '{':
            case '[':
            case '(':
              brackets.push(c);
              break;
            case '}':
              if (brackets.empty() || (brackets.top() != '{')) return "NO";
              brackets.pop();
              break;
            case ']':
              if (brackets.empty() || (brackets.top() != '[')) return "NO";
              brackets.pop();
              break;
            case ')':
              if (brackets.empty() || (brackets.top() != '(')) return "NO";
              brackets.pop();
              break;
            default:
              break;
          }
      }

      if (!brackets.empty()) return "NO";
      return "YES";
}

int main(){
    int t;
    cin >> t;
    bool balanced;

    for(int a0 = 0; a0 < t; a0++){
        string s;
        cin >> s;
        cout << isBalanced(s) << endl;
    }
    return 0;
}
