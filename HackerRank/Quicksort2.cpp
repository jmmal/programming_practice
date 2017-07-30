#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> a) {
    for(int i = 0; i < a.size(); i++) cout << a[i] << " ";
    cout << endl;
}

void quickSort(vector <int> &arr) {
   if (arr.size() < 2) {
       return;
   }

   vector<int> left;
   vector<int> right;

   int pivot = arr[0];

   for (int i = 0; i < arr.size(); i++) {
       if (arr[i] < pivot) left.push_back(arr[i]);
       if (arr[i] > pivot) right.push_back(arr[i]);
   }

   quickSort(left);
   quickSort(right);

   for(int i = 0; i < left.size(); i++) arr[i] = left[i];
   arr[left.size()] = pivot;

   for(int j = 0; j < right.size(); j++) arr[left.size() + 1 + j] = right[j];
   printVec(arr);
}

int main()
{
    int n;
    cin >> n;

    vector <int> arr(n);
    for(int i = 0; i < (int)n; ++i) {
        cin >> arr[i];
    }

    quickSort(arr);
    return 0;
}
