#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin >> n;

	int row = 1;
	

	while (row <= n) {
		int col = 1;
		int count = row;
		while (col <= row) {
			cout << count << " ";
			count++;
			col++;
		}
		cout << endl;
		row++;
	}
	return 0;
}