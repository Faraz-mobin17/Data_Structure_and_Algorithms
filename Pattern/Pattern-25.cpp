#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;

	for (int row = 1; row <= n; row += 1) {

		for (int space = 1; space <= n - row; space +=1 ) {
			cout << " ";
		}	
		for (int col = 1; col <= n; col += 1) {
			if (row == 1 || row == n || col == 1 || col == n)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}
return 0;
}