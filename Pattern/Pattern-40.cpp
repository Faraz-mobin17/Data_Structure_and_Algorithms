#include <iostream>
using namespace std;

// OUTPUT: 

// * * * * *
//   * * * * *
//    * * * * *
//     * * * * *
//      * * * * *

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {
		for (int space = 1; space <= row; space += 1) {
			cout << " ";
		}
		for (int col = n; col >= 1; col -= 1) {
			cout << "* ";
		}
		cout << "\n";
	}

	return 0;
}