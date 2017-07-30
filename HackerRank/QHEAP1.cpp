#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int Q;
    cin >> Q;

    int v;
    set<int> heap;
    for (int i = 0; i < Q; i++) {
      cin >> v;

      switch (v) {
        case 1:
          cin >> v;
          heap.insert(v);
          break;
        case 2:
          cin >> v;
          heap.erase(v);
          break;
        case 3:
          cout << *heap.begin() << endl;
          break;
      }
    }


    return 0;
}
