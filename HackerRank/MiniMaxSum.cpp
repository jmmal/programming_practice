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
    long int a;
    //cin >> a >> b >> c >> d >> e;

    long long int sum = 0;
    long long int min = 1000000000;
    long long int max = 0;

    for (int i = 0; i < 5; i++) {
        cin >> a;
        if (a > max) max = a;
        if (a < min) min = a;
        sum += a;
    }

    cout << sum - max << " " << sum - min << endl;
    return 0;
}
