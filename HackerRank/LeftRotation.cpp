#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <deque>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, d, temp;
    cin >> n >> d;
    std::deque<int> myints;

    for(int i = 0; i < n; i++) {
        cin >> temp;
        myints.push_back (temp);
    }

    for(int i = 0; i < n - d; i++) {
        temp = myints.back();
        myints.push_front(temp);
        myints.pop_back();
    }

    while(!myints.empty()) {
        temp = myints.front();
        cout << temp << " ";
        myints.pop_front();
    }


    return 0;
}
