#include <iostream>
using namespace std;

int main()
{ 
	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {

		for (int space = 1; space <= row; space += 1) {
			cout << " ";
		}

		int k =  ( n * 2 )  - ((2 * row) - 1 ); // number of stars to print
		
		

		for (int col = 1; col <= k; col += 1 ) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}