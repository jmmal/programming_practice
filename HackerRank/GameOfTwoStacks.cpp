#include <bits/stdc++.h>

using namespace std;

int main(){
    int g;
    cin >> g;
    for(int a0 = 0; a0 < g; a0++){
        int n;
        int m;
        int x;
        cin >> n >> m >> x;
        vector<int> a(n);
        for(int a_i = 0; a_i < n; a_i++){
           cin >> a[a_i];
        }
        vector<int> b(m);
        for(int b_i = 0; b_i < m; b_i++){
           cin >> b[b_i];
        }
        // your code goes here

        int ai = 0;
        int bi = 0;
        int tempSum = 0;

        int ans = 0;

        // calculate if we only use the left stack
        while (ai < n && tempSum + a[ai] <= x) {
          tempSum += a[ai++];
        }
        ans = ai;

        while (bi < m && ai >= 0) {
          tempSum += b[bi++];

          while (tempSum > x && ai > 0) {
            ai--;
            tempSum -= a[ai];
          }

          if (tempSum <= x && ai + bi > ans) {
            ans = ai + bi;
          }
        }

        cout << ans << endl;

    }
    return 0;
}
