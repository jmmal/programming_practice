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
    string s;
    cin >> s;
    long n;
    cin >> n;

    long count = 0;

    for (int i = 0; i < s.length(); i++) {
      if (s[i] == 'a') count++;
    }
    long repetitions = n / (long) s.length();
    count *= repetitions;
    int rem = n % s.length();
    for (int i = 0; i < rem; i++) {
      if (s[i] == 'a') count++;
    }

    cout << count << endl;
    return 0;
}
