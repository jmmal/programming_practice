#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void p(vector<int> a) {
    for (int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void swap(vector<int> &arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int partition(vector<int> &arr, int lo, int hi) {
    int pivot = arr[hi];
    int i = lo;
    for(int j = lo; j < hi; j++) {
        if (arr[j] <= pivot) {
            swap(arr,i,j);
            i++;
        }
    }
    swap(arr, i, hi);
    p(arr);
    return i;
}

void quicksort(vector<int> &arr, int lo, int hi) {
    if (lo < hi) {
        int part = partition(arr, lo, hi);
        quicksort(arr, lo, part - 1);
        quicksort(arr, part + 1, hi);
    }

}


int main() {
    int n, temp;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    quicksort(arr, 0, n-1);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
