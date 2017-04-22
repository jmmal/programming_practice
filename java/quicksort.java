public class quicksort {
	public static void printArr(int[] A) {
		for (int i : A) System.out.print(i + " ");
		System.out.println();
	}

	public static void swap(int[] A, int i, int j) {
		int temp = A[i];
		A[i] = A[j];
		A[j] = temp;
	}

	public static int partition(int[] A, int lo, int hi) {
		int pivot = A[lo];
		int i = lo;
		int j = hi;
		
		while (true) {
			while (A[i] < pivot) i++;
			while (A[j] > pivot) j--;
			if (i >= j) return j;

			swap(A, i , j);
			i++;
			j--;
		}
	}

	public static void quicksort(int[] A, int lo, int hi) {
		if (lo < hi) {
			int p = partition(A, lo, hi);
			quicksort(A, lo, p);
			quicksort(A, p + 1, hi);
		}
	}

	//main method
	public static void main(String[] args) {
		int[] arr = {1,54,2,7,5,89,4,8,4,1};
		printArr(arr);

		quicksort(arr, 0, arr.length - 1);
		printArr(arr);
	}


}
