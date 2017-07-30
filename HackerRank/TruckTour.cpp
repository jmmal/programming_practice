#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int N; cin >> N;

    int pet;
    int dist = 0;
    int feul = 0;
    int minFeul = INT_MAX;
    int station;

    for (int i = 0; i < N; i++) {
      feul -= dist;
      if (feul < minFeul) {
        station = i;
        minFeul = feul;
      }
      cin >> pet;
      feul += pet;
      cin >> dist;
    }

    cout << station << endl;
    return 0;
}
