#include <bits/stdc++.h>

using namespace std;

int solve(int n, int p){
    // Complete this function
    if (p % 2 != 0) p--;
    int start = p / 2;

    int end = (n - p) / 2;

    if (start < end) return start;
    return end;

}

int main() {
    int n;
    cin >> n;
    int p;
    cin >> p;
    int result = solve(n, p);
    cout << result << endl;
    return 0;
}
