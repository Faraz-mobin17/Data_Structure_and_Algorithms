#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "ENter value of N: " << "\n";
	cin >> n;
	for (int row = 1; row <= (2*n-1); row += 1) {
		int totalCols = row > n ? 2 * n - row : row;
		for (int col = 1; col <= totalCols; col++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}