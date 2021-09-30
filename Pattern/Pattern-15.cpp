#include <iostream>
using namespace std;

// OUTPUT
// 15.      *
//         * *
//        *   *
//       *     *
//      *       *
//       *     *
//        *   *
//         * *
//          *


int main() {

	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	int n;
	char print;

	cout << "Enter the number of rows: " << endl;
	cin >> n;
	
	cout << "Enter the character you want to print: " << endl;
	cin >> print;

	for (int row = 1; row <= n;  row += 1) {
		for (int col = 1; col <= (2 * n - 1); col += 1) {
			if (col == (n - (row - 1)) || col == (n + (row - 1)))
				cout << print;
			else 
				cout << " ";
		}
		cout << "\n";
	}

	for (int row = n - 1; row >= 1; row -= 1) {
		for (int col = 1; col <= (2 * n - 1); col += 1) {
			if (col == n - (row - 1) || col == n + (row - 1))
				cout << print;
			else 
				cout << " ";
		}
		cout << "\n";
	}

	return 0;
}