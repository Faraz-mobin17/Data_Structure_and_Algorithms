  // 1 2 3 4  17 18 19 20
  //   5 6 7  14 15 16
  //     8 9  12 13
  //       10 11
#include <bits/stdc++.h>
using namespace std;

int main() {

	int n;
	cin >> n;
	int count = 1, count2 = n * n + 1;

	for (int row = 1; row <= n; row += 1)
	{
		for (int space = 1; space <= row; space +=1 )
		{
			cout << " ";
		}
		
		for (int col = 1; col <= n + 1 - row; col += 1) {
			cout << count++<< " ";
		}
		for (int col = 1; col <= n + 1 - row; col += 1) {
			cout << count2++<< " ";
		}
		count2 = count2 - (2 * ( n - row )) - 1;
		cout << "\n";
	}

	return 0;
}