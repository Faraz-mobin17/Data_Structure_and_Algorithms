#include <iostream>
using namespace std;

// OUTPUT: 
// 18.   **********
//       ****  ****
//       ***    ***
//       **      **
//       *        *
//       *        *
//       **      **
//       ***    ***
//       ****  ****
//       **********

int main() {

	int n;
	cin >> n;
	int k = 0;

	for (int row = 1; row <= 2 * n + 1; row += 1) 
	{

		int value_of_k = row > n ? k-- : k++;

		for (int col = 1; col <= 2 * n; col += 1) 
		{

			if (col <= n - value_of_k || col > n + value_of_k)
				cout << "*";
			else 
				cout << " ";

		}
		
		cout << "\n";
	}

	return 0;
}