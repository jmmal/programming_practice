#include <bits/stdc++.h>

using namespace std;

vector < int > solve(vector < int > grades){
    // Complete this function
    for(int i = 0; i < grades.size(); i++) {
        if (grades[i] >= 38) {
            int rem = grades[i] % 5;
            if (rem >= 3) {
                grades[i] += 5 - rem;
            }
        }
    }
    return grades;
}

int main() {
    int n;
    cin >> n;
    vector<int> grades(n);
    for(int grades_i = 0; grades_i < n; grades_i++){
       cin >> grades[grades_i];
    }
    vector < int > result = solve(grades);
    for (ssize_t i = 0; i < result.size(); i++) {
        cout << result[i] << (i != n - 1 ? " " : "") << endl;
    }
    cout << endl;


    return 0;
}
