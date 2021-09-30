#include <iostream>
using namespace std;

// OUTPUT: 

//  * * * * *
//   * * * *
//    * * *
//     * *
//      *
//    	*
//     * *
//    * * *
//   * * * *
//  * * * * *

int main() {

	
	int n;
	cin >> n;

	for (int row = 1; row <= (2 * n); row += 1) {

		int totalSpaces = row > n ? 2 * n - row + 1: row;
		int totalCols = row > n ? row - n : n - row + 1;

		for (int space = 1; space <= totalSpaces; space += 1) {
			cout << " ";
		}
	

		for (int col = 1; col <= totalCols; col += 1) {
			cout << "* ";
		}

		cout << "\n";
	}

	return 0;
}