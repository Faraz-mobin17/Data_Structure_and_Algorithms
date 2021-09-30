#include <iostream>
using namespace std;

// OUTPUT: 
// 17.      1
//         212
//        32123
//       4321234
//        32123
//         212
//          1

int main() {

	int n;
	cin >> n;

  for (int row = 1; row <= 2 * n; row++) {

            int c = row > n ? 2 * n - row: row;

            for (int space = 0; space < n-c; space++) {
                cout << " ";
            }

            for (int col = c; col >= 1; col--) {
                cout << col << " ";
            }
            for (int col = 2; col <= c; col++) {
                cout << col << " ";
            }

            cout<< endl;
        }


	return 0;
}