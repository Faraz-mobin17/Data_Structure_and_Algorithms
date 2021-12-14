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
		while (col <= n) {
			cout << char(64 + val) << " ";
			val++;
			col++;
		}
		cout << endl;
		row++;
	}
	return 0;
}