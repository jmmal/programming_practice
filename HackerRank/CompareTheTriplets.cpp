#include <bits/stdc++.h>

using namespace std;

vector < int > solve(int a0, int a1, int a2, int b0, int b1, int b2){
    // Complete this function
    vector<int> points(2,0);
  
    if (a0 > b0) points[0]++; else 
    if (a0 < b0) points[1]++;
  
    if (a1 > b1) points[0]++; else 
    if (a1 < b1) points[1]++;
  
    if (a2 > b2) points[0]++; else
    if (a2 < b2) points[1]++;
  
    return points;
}

int main() {
    int a0;
    int a1;
    int a2;
    cin >> a0 >> a1 >> a2;
    int b0;
    int b1;
    int b2;
    cin >> b0 >> b1 >> b2;
    vector < int > result = solve(a0, a1, a2, b0, b1, b2);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != result.size() - 1 ? " " : "");
    }
    cout << endl;
    

    return 0;
}
