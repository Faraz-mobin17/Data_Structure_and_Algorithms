#include <iostream>
using namespace std;

// OUTPUT: 
//    	 1
//      11
//     121
//    1331
//   14641

int main() {

	int n;
	cin >> n;
	int x = 1;
	for (int row = 1; row <= n; row += 1) {

		for (int space = 1; space <= n - row + 1; space += 1) {
			cout << " ";
		}

		for (int col = 1; col <= 1; col += 1) {

			if (row == 1) {
				cout << x;
				break;
			}

			x = x * 11;
			cout << x;
		}	
		cout << " \n ";
	}

	return 0;
}