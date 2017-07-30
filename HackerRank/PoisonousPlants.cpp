#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <stack>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int day = -1;
    vector<int> currentDay;

    bool death;
    int t;
    int N; cin >> N;

    for (int i = 0; i < N; i++) {
      cin >> t;
      currentDay.push_back(t);
    }

    do {
      death = false;
      vector<int> tomorrow;
      tomorrow.push_back(currentDay[0]);

      for (int i = 1; i < currentDay.size(); i++) {
        if (currentDay[i] <= currentDay[i-1]) {
          tomorrow.push_back(currentDay[i]);
        } else {
          death = true;
        }
      }
      day++;
      currentDay = tomorrow;
    } while (death);

    cout << day << endl;
    return 0;
}
