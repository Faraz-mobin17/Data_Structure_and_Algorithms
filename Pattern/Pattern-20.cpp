#include <iostream>
using namespace std;
// OUTPUT:
// 20.
// ****
// *  *
// *  *
// *  *
// ****


int main() {

	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {
		for (int col = 1; col < n ; col += 1) {
			if (row == 1 || row == n ||  col == 1 || col == (n - 1)) {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl;
	}

	return 0;
}