#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int reversed(int x) {
  string s = to_string(x);
  reverse(s.begin(), s.end());

  string::size_type sz;   // alias of size_t
  return stoi(s, &sz);
}

int main() {
  int i, j, k;
  cin >> i >> j >> k;
  int count = 0;

  for (int x = i; x <= j; x++) {

    if (abs(x - reversed(x)) % k == 0) count++;
  }
  cout << count << endl;
  return 0;
}
