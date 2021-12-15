#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin >> n; 

	int row = 1;

	while (row <= n)  {
		int space = 1;
		while (space <= n - row) {
			cout << " ";
			space += 1;
		}
		int col = 1;

		while (col <= row) {
			cout << row;
			col += 1;
		}
		cout << endl;
		row += 1;
	}
	return 0;
}