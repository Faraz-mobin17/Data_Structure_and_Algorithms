#include <iostream>
using namespace std;

int main()
{ 
	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {

		int k = (2 * row) - 1; // number of stars to print
		
		for (int space = 1; space <= n - row + 1; space += 1) {
			cout << " ";
		}

		for (int col = 1; col <= k; col += 1 ) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}