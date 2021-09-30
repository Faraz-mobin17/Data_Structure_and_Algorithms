// OUTPUT: 

// 1 1 1 1 1 1
// 2 2 2 2 2
// 3 3 3 3
// 4 4 4
// 5 5
// 6

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {
		for (int col = 1; col <= n - row + 1; col += 1) {
			cout << row << " ";
		}
		cout << endl;
	}
	return 0;
}