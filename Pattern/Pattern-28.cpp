#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "Enter the value of N: " << "\n";
	cin >>n;

	for (int row = 1; row <= (2 * n) - 1; row += 1) {
		int totalCols = row > n ? (2 * n) - row : row;
		int totalSpaces = n - totalCols;
		for (int spaces = 1; spaces <= totalSpaces; spaces+= 1) {
			cout << " ";
		}
		for (int i = 1; i <= totalCols; i += 1) {
			cout << " *";
		}
		cout << "\n";
	}
	return 0;
}