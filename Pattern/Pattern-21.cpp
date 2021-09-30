#include <iostream>
using namespace std;

int main() {
	int n,number;
	cin >> n >> number;
	
	for (int row = 1; row <= n; row += 1) {
		for (int col = 1; col <= row; col += 1) {
			cout << number << " ";
			++number;
		}
		cout << "\n";
	}
	return 0;
}