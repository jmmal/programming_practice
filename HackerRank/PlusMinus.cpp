#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

void printfl(int i, int n) {
    cout << std::fixed << std::setprecision(6) << float(i) / n << endl;
}
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
       cin >> arr[arr_i];
    }

    int pos = 0;
    int neg = 0;
    int zero = 0;

    for(int i = 0; i < n; i++) {
        if (arr[i] >  0)  pos++;
        if (arr[i] == 0) zero++;
        if (arr[i] <  0)  neg++;
    }

    printfl(pos, n);
    printfl(neg, n);
    printfl(zero, n);
    return 0;
}
