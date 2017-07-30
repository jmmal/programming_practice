#include <bits/stdc++.h>
#include <map>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    std::map<int,int> freq;

    for (int i = 0; i < n; i++) {
        freq[ar[i]]++;
    }

    std::map<int,int>::iterator it=freq.begin();
    int maxKey = it->first;
    int maxFreq = it->second;

    while (it!=freq.end()) {
        if (it->second > maxFreq) {
            maxKey = it->first;
            maxFreq = it->second;
        }
        it++;
    }
    return maxKey;

}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
