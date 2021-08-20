#include <iostream>
#define ROW 4
#define COL 4
using namespace std;


int search(int arr[ROW][COL], int target) {
	for (int i = 0; i < ROW; i += 1 ) {
		for (int j = 0; j < COL; j += 1) {
			if (arr[i][j] == target) {
				cout << "Element found at {" << i << ", " << j << "}\n";
				return 1;
			}
		}
	}
	cout << "Element not found\n";
	return -1;
}

int main() {
	int arr[ROW][COL] = {
		{23,4,1,2},
		{18,12,3,9},
		{78,99,34,56},
		{18,12,1,1}
	};
	int target = 456;
	 search(arr,target);
	return 0;
}