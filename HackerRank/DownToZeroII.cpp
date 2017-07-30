#include <bits/stdc++.h>

using namespace std;

int main() {
    int Q;
    cin >> Q;
    for(int a0 = 0; a0 < Q; a0++){
        int N;
        cin >> N;
        int count = 0;
        while (N != 0) {
          if (N % 2 == 0) {
            N /= 2;
          } else {
            N--;
          }
          count++;
        }
        cout << count << endl;
    }
    return 0;
}
