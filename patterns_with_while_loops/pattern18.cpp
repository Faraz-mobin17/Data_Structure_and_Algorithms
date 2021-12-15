#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	int row = 1;

	while (row <= n) {
		int space = 1;
		while (space <= row) {
			cout << " ";
			space += 1;
		}
		int col = 1;
		while (col <= n - row + 1) {
			cout << row;
			col += 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}