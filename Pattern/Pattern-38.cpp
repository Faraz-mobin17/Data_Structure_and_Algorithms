// 10000
// 01000
// 00100
// 00010
// 00001

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1 ) {
		for (int col = 1; col <= n; col += 1) {
			if (row == col) {
				cout << 1 << " ";
			} else {
				cout << 0<< " ";
			}
		}
		cout << "\n";
	}
	return 0;
}