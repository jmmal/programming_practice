#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int sockMerchant(int n, vector <int> ar) {
    // Complete this function
    unordered_map<int, int> socks;
    unordered_map<int, int>::iterator color;

    for (int i = 0; i < n; i++) {
      color = socks.find(ar[i]);

      if (color == socks.end()) socks[ar[i]] = 1;
      else socks[ar[i]]++;
    }

    color = socks.begin();
    int pairs = 0;
    // Iterate over the map using iterator
    while(color != socks.end())
    {
      pairs += color->second / 2;
      color++;
    }
    return pairs;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = sockMerchant(n, ar);
    cout << result << endl;
    return 0;
}
