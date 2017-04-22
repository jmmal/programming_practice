#include <iostream>
using namespace std;

void print(int arr[], int n) {
	for(int i = 0; i < n; i++) cout << arr[i] << " ";
	cout << endl;
}

int partition(int A[], int lo, int hi) {
	int pivot = A[lo];
	int i = lo;
	int j = hi;
	while (true) {
		while (A[i] < pivot) i++;	
		
		while (A[j] > pivot) j--;

		if (i >= j) return j;
		
		int temp = A[i];
		A[i]= A[j];
		A[j] = temp;
		i++;
		j--;
	}
}

void quicksort(int A[], int lo, int hi) {
	if (lo < hi) {
		int p = partition(A, lo, hi);
		quicksort(A, lo, p);
		quicksort(A, p + 1, hi);
	}
}

int main() {
	int arr[] = {1,4,6,2,4,8,4};
	print(arr,7);
	quicksort(arr, 0, 6);

	print(arr, 7);
	return 0;
}
