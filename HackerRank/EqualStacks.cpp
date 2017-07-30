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

int main(){
    int n1;
    int n2;
    int n3;

    int sum_1 = 0;
    int sum_2 = 0;
    int sum_3 = 0;
    cin >> n1 >> n2 >> n3;

    vector<int> h1(n1);

    for(int h1_i = 0;h1_i < n1;h1_i++){
       cin >> h1[h1_i];
       sum_1 += h1[h1_i];
    }

    vector<int> h2(n2);
    for(int h2_i = 0;h2_i < n2;h2_i++){
       cin >> h2[h2_i];
       sum_2 += h2[h2_i];
    }

    vector<int> h3(n3);
    for(int h3_i = 0;h3_i < n3;h3_i++){
       cin >> h3[h3_i];
       sum_3 += h3[h3_i];
    }

    int index1 = 0;
    int index2 = 0;
    int index3 = 0;
    int count = 0;

    while (sum_1 != sum_2 || sum_2 != sum_3) {
      if ((sum_1 > sum_2 || sum_1 > sum_3) && index1 < h1.size()) {
        sum_1 -= h1[index1++];
      }

      if ((sum_2 > sum_1 || sum_2 > sum_3) && index2 < h2.size()) {
        sum_2 -= h2[index2++];
      }

      if ((sum_3 > sum_2 || sum_3 > sum_1) && index3 < h3.size()) {
        sum_3 -= h3[index3++];
      }
    }

    cout << sum_1 << endl;
    return 0;
}
