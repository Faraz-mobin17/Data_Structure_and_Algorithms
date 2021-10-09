#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	
	int n;
	cin >> n;
	int orignalN = n;
	n = 2 * n - 2w;
	for (int row = 0; row <= n; row += 1) {
		for (int col = 0; col <= n; col += 1) {
			int atEveryIndex = orignalN - min(min(row,col), min(n-row,n-col));
			cout << atEveryIndex << " ";
		}
		cout << endl;
	}
	return 0;
}