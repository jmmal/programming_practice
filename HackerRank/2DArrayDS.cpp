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

void print(vector< vector<int> > arr) {
    for (int j = 0; j < arr.size() - 2; j++) {
        for (int i = 0; i < arr[0].size() - 2; i++) {
            cout << arr[j][i] << " ";
            cout << arr[j][i+1] << " ";
            cout << arr[j][i+2] << " " << endl;
            cout << "  " << arr[j+1][i+1] << " " << endl;
            cout << arr[j+2][i] << " ";
            cout << arr[j+1][i+1] << " ";
            cout << arr[j+2][i+2] << " " << endl;
            cout << endl;
        }
        cout << endl;
    }

}

int main(){
    vector< vector<int> > arr(6,vector<int>(6));
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> arr[arr_i][arr_j];
       }
    }
    //print(arr);
    int max = -64;
    for (int j = 0; j < arr.size() - 2; j++) {
        for (int i = 0; i < arr[0].size() - 2; i++) {
            int sum = 0;
            sum += arr[j][i];
            sum += arr[j][i+1];
            sum += arr[j][i+2];
            sum += arr[j+1][i+1];
            sum += arr[j+2][i];
            sum += arr[j+2][i+1];
            sum += arr[j+2][i+2];
            if (sum > max) max = sum;
        }
    }
    cout << max << endl;
    return 0;
}
