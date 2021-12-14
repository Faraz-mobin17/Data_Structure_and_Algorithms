#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin >> n;

	int row = 1;
	int val = 0;
	while (row <= n) {
		int col = 1;
		while (col <= row) {
			cout << char(65 + val) << " ";
			col += 1;
		}
		cout << endl;
		val += 1;
		row += 1;
	}
	return 0;
}