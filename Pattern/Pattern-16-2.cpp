#include <iostream>
using namespace std;


int main() {

	int no_of_rows; 
	cin >> no_of_rows;
	
	for (int row = 1; row <= no_of_rows; row += 1) {
		int coef = 1;	
		for (int space = 1; space <= no_of_rows - row; space += 1)  {
			cout << " ";
		}
		for (int col = 1; col <= row; col += 1) {
				cout << coef << " ";
				coef = coef * (row - col) / (col);
			}
			cout << "\n";
	}
	return 0;
}