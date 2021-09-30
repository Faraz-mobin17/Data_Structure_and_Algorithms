#include <iostream>
using namespace std;

// HOW TO GET ODD NUMBER COLS IN REVERSE ORDER : (n * 2 - (2 * row - 1))

// OUTPUT: 
//  *********
//   *     *
//    *   *
//     * *
//      *


int main() {

	int n;
	cin >> n;
	
	for (int row = 1; row <= n; row += 1) {

		for (int space = 1; space <= row; space += 1) {
			cout << " ";
		}
	
		for (int col = 1; col <= (n * 2 - (2 * row - 1)); col += 1) {

			if (row == 1 || col == 1 || col == (n * 2 - (2 * row - 1))) {
				cout << "*";
			} else {
				cout << " ";
			}

		}

		cout << "\n";
	}
	return 0;
}