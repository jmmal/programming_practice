#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        int height = 1;
        bool spring = true;
        for (int i = 0; i < n; i++) {
          // spring
          if (spring) {
            height *= 2;
            spring = false;
          }
          // summer
          else {
            height++;
            spring = true;
          }
        }
        cout << height << endl;
    }
    return 0;
}
