#include <bits/stdc++.h>

using namespace std;

vector < int > getRecord(vector < int > s){
    // Complete this function
    int min = s[0];
    int max = s[0];
    int numMax = 0;
    int numMin = 0;

    for (int i = 1; i < s.size(); i++) {
        if (s[i] < min) {
            numMin++;
            min = s[i];
        } else if (s[i] > max) {
            numMax++;
            max = s[i];
        }
    }

    vector<int> t;
    t.push_back(numMax);
    t.push_back(numMin);
    return t;
}

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int s_i = 0; s_i < n; s_i++){
       cin >> s[s_i];
    }
    vector < int > result = getRecord(s);
    string separator = "", delimiter = " ";
    for(auto val: result) {
        cout<<separator<<val;
        separator = delimiter;
    }
    cout<<endl;
    return 0;
}
