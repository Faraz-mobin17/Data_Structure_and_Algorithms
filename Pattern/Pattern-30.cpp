#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int row = 1; row <= n; row += 1) {
		for (int spaces = 1; spaces <= n - row; spaces +=1 ) {
			cout << " ";
		}
		for (int col = row; col >= 1; col--) {
			cout << col  << " ";
		}
		for (int col = 2; col <= row; col++) {
			cout << col  << " ";
		}
		cout << "\n";
	}
	return 0;
}