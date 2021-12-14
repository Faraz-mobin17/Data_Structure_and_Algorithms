#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int row = 1;
	while (row <= n) {
		int col = 1;
		char start = 'A' + n - row;
		while (col <= row) {
			cout << start;
			start += 1;
			col += 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}