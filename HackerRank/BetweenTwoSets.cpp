#include <bits/stdc++.h>

using namespace std;

int getTotalX(vector < int > a, vector < int > b){
    int count = 0;
    for (int x = 1; x <= 100; x++) {
      bool between = true;
      // is a factors of a?
      for (int j = 0; j < a.size() && between; j++) {
        if (x % a[j] != 0) {
          between = false;
          break;
        }
      }

      // is x factors of b?
      for (int j = 0; j < b.size() && between; j++) {
        if (b[j] % x != 0) {
          between = false;
          break;
        }
      }

      if (between) count++;
    }

    return count;
}

int main() {
    int n;
    int m;
    cin >> n >> m;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
       cin >> a[a_i];
    }
    vector<int> b(m);
    for(int b_i = 0; b_i < m; b_i++){
       cin >> b[b_i];
    }
    int total = getTotalX(a, b);
    cout << total << endl;
    return 0;
}
