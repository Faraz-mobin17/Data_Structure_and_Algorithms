// 32
// E
// D E
// C D E
// B C D E
// A B C D E
#include <iostream>
using namespace std;
int main()
{
 
  int n;
  cin >> n;

  for (int row = n; row >= 1; row -= 1) {
  	for (int col = row; col <= n; col += 1) {
  		cout << (char)(col + 64) << " ";
  	}
  	cout << endl;
  }
  return 0;
}
 