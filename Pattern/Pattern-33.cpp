#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	for (int row = 1; row <= n; row += 1) {
		for (int col = 1; col <= row; col += 1) {
			cout << (char)(col + 64) << " ";
		}
		cout << endl;
	}
	return 0;
}