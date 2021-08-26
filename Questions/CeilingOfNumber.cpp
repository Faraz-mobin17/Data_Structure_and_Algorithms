#include <bits/stdc++.h>
using namespace std;

// return the index of smallest no >= target
int ceilingNumber(int arr[], int target, int size)
{
	if (target > arr[size]) return -1;
	int start = 0;
	int end = size;

	while (start <= end) 
	{
		int mid = start + (end - start) / 2;
		
		 if (target > arr[mid]) {
			start = mid + 1;
		} else if (target < arr[mid]) {
			end = mid - 1;
		} else {
			return mid;
		}
	}
	return start;
}

int main() {
	int arr[] = {2,3,5,9,14,16,18};
	int size = sizeof(arr) / sizeof(arr[0]);
	int target = 15;
	int ans = ceilingNumber(arr,target,size);
	cout << ans << endl;
	return 0;
}