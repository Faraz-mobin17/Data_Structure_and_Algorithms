// OUTPUT:
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// 1 0 1 0 1

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1 ) {
		for (int col = 1; col <= row; col += 1) {
			if ((row + col) % 2 == 1) 
				cout << 0 << " ";
			else 
				cout << 1 << " ";
		}
		cout << "\n";
	}
	return 0;
}