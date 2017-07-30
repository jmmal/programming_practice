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

bool ransom_note(vector<string> magazine, vector<string> ransom) {
    std::unordered_map<std::string,int> mymap;
    unordered_map<std::string,int>::const_iterator it;
    unordered_map<std::string,int>::const_iterator iter;

    // push all words in the magazine into the hash
    for (int i = 0; i < magazine.size(); i++) {
        it = mymap.find(magazine[i]);

        // if duplicate word, increment
        if (it != mymap.end()) {
            mymap[magazine[i]]++;
        } else {
            // else insert
            mymap.insert({magazine[i], 1});
        }
    }

    // check if each ransom word is in the hash if no then no
    for (int i = 0; i < ransom.size(); i++) {
        iter = mymap.find(ransom[i]);
        if (iter != mymap.end() && mymap[ransom[i]] > 0) {
            mymap[ransom[i]]--;
        } else return false;
    }
    return true;
}

int main(){
    int m;
    int n;
    cin >> m >> n;
    vector<string> magazine(m);
    for(int magazine_i = 0;magazine_i < m;magazine_i++){
       cin >> magazine[magazine_i];
    }
    vector<string> ransom(n);
    for(int ransom_i = 0;ransom_i < n;ransom_i++){
       cin >> ransom[ransom_i];
    }
    if(ransom_note(magazine, ransom))
        cout << "Yes\n";
    else
        cout << "No\n";
    return 0;
}
