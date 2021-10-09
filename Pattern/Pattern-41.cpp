#include <iostream>
using namespace std;

// OUTPUT: 
// 35.   *****
//       ****  
//       ***   
//       **     
//       *       
//       *       
//       **      
//       ***    
//       ****  
//       *****

int main() {

	int n;
	cin >> n;


	for (int row = 1; row <= 2 * n; row += 1) {

		int totalCols = row > n ? row - n : n - row + 1;
		
		for (int col = 1; col <= totalCols; col += 1) {
			cout << "*";
		}
		cout << "\n";

	}
	

	return 0;
}