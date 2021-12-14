#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n; 
	cin >> n;

	int row = 1; 
	int value = 0;
	while (row <= n) {
		int col = 1;
		while (col <= n) {
			cout << char(65 + value) << " ";
			col++;
		}
		cout << endl;
		value++;
		row++;
	}


	return 0;
}