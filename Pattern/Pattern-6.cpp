#include <iostream>
using namespace std;

int main() {
	int n;

	cout << "ENter value of N: " << "\n";
	cin >> n;

	for (int row = 1; row <= n; row++) {
		for (int space = 1; space <= n - row; space++) {
			cout << " ";
		}
		for (int i = 1; i <= row; i ++ )
			cout << "*";
		cout << "\n";
	}

	return 0;
}