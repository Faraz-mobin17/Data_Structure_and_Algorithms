#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int size) {
	int start = 0;
	int end = size - 1;

	while (start <= end) {
		int mid = start + (end - start) / 2;

		if (target == mid) {
			return arr[mid];
		} else if (target > arr[mid]) {
			start = mid + 1;
		} else {
			end = mid - 1;
		}
	}
	return arr[start];
}

int main() {
	int arr[] = {1,3,5,7,8,10,11,15};
	int target  = 10;
	int size = sizeof(arr) / sizeof(arr[0]);
	cout << binarySearch(arr,target,size);

	return 0;
}