#include <bits/stdc++.h>
using namespace std;

void swap(int a, int b) {
	 int temp = a;
	 a = b;
	 b = temp;
}

void selectionSort(int* arr[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int min_idx = 0;
		for (int j = i + 1; j < n; j += 1) {
			if (arr[j] < arr[min_idx])
				min_idx = j;
		}
		swap(arr[min_idx],arr[i]);
	}
}

int main() {
	int arr[] = {4,5,1,2,3};
	int n = sizeof(arr) / sizeof(arr[0]);
	selectionSort(&arr,n);	
	for (int i = 0; i < n ; i += 1)
		cout << arr[i] << " ";
	return 0;
}