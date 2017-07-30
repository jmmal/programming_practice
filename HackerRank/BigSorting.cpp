#include <bits/stdc++.h>
#include <string>
#include <algorithm>

using namespace std;

bool is_not_digit(char c)
{
    return !std::isdigit(c);
}

bool numeric_string_compare(const std::string& s1, const std::string& s2)
{
    // handle empty strings...

    if (s1.length() != s2.length()) {
        return s1.length() < s2.length();
    } else {
        return s1 < s2;
    }
}

int main(){
    int n;
    cin >> n;
    vector<string> unsorted(n);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
    }
    // your code goes here
    std::sort (unsorted.begin(), unsorted.end(), numeric_string_compare);
    for (int i = 0; i < unsorted.size(); i++) {
        cout << unsorted[i] << endl;
    }

    return 0;
}
