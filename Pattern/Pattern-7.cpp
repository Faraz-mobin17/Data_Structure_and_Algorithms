#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "ENter value of N: " << "\n";
	cin >> n;

	for (int row = 1; row <= n; row++) {
		for (int space = 1; space <= row - 1; space++) {
			cout << " ";
		}
	for (int i = 1; i <= n - row + 1; i++) {
		cout << "*";
	}
		cout << "\n";
	}

	return 0;
}