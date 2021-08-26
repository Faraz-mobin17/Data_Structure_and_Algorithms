#include <bits/stdc++.h>
using namespace std;

int search(int arr[], int target, int n) {
	int peak = peakIndexMountain(arr);
	int firstTry = binarySearch(arr,target,0,4);
	if (firstTry != -1) return firstTry;
	return binarySearch(arr,target,peak+1,n - 1);
}

int peakIndexMountain( int arr[] ) {
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

int binarySearch(int arr[], int target, int start, int end) {
	bool isAsc = arr[start] < arr[end];
	while (start <= end) {
		int mid = start + (end - start )  / 2;
		
		if (arr[mid] == target) return mid;
		if (isAsc) {
			if (arr[mid] < target) end = mid - 1;
			else start = mid + 1;
		} else {
			if (target > arr[mid]) {
				end = mid - 1;
			} else {
				start = mid + 1;
			}
		}
		
	}
	return -1;
}


int main() {
	return 0;
}