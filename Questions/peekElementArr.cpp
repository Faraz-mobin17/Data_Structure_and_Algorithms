#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n) {
	int start = 0;
	int end = n  - 1;

	while (start < end) {
		int mid = start + (end - start) / 2;

		if (arr[mid] > arr[mid + 1]) {
			end = mid;
		} else  {
			start = mid + 1;
		} 
	}
	return start;
}

int main() {
	int arr[] = {0,1,0};
	int n = sizeof(arr) / sizeof(arr[0]);
	cout << binarySearch(arr,n) << endl;
	return 0;
}