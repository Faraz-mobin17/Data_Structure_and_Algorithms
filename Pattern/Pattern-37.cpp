// 1
// 2 2
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5
#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;
	for (int row = 1; row <= n; row += 1) {
		for (int col = 1; col <= row; col += 1) {
			cout << row << " ";
		}
		cout << "\n";
	}
	return 0;
}