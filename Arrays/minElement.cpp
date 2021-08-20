#include <iostream>
using namespace std;

int minEl(int arr[], int size) {
	int min = arr[0];
	for (int i = 0; i < size - 1; i += 1) {
		if (arr[i] < arr[min]) 
			arr[min] = arr[i];
	}
	return arr[min];
}

int main() {
	int arr[] = {18,12,-7,3,14,28};
	int size = sizeof(arr[0] / sizeof(arr));
	int ans = minEl(arr,size);

	cout << ans << endl;
	return 0;
}