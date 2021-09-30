#include <iostream>
using namespace std;

// OUTPUT:

//    	*
//     * *
//    * * *
//   * * * *
//  * * * * *

int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {
		for (int space = 1; space <= n - row + 1; space += 1) {
			cout << " ";
		}
		for (int col = 1; col <= row; col += 1) {
			cout << "* ";
		}
		cout << "\n";
	}

	return 0;
}