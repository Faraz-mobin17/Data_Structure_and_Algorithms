#include <iostream>
using namespace std;

// HOW TO GET ODD NUMBER COLS IN SEQUENTIAL ORDER :  (2 * row - 1)

// OUTPUT
// 13.      *
//         * *
//        *   *
//       *     *
//      *********

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {

		for (int space = 1; space <= n - row + 1; space += 1) {
			cout << " ";
		}

		for (int col = 1; col <= (2 * row - 1); col += 1) {
			
			if (row == n || col == 1 || col == (2 * row - 1)) 
				cout << "*";
			else 
				cout << " ";
		}

		
		cout << "\n";

	}

	return 0;
}