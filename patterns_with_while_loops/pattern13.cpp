#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin >> n;
	int row = 1;
	int value = 0;


	while (row <= n ) {
		int col = 1;
		while (col <= row) {
			cout << char(65 + value) << " ";
			value += 1;
			col += 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}