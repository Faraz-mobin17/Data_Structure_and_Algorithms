#include <iostream>
using namespace std;

int main() {

	for (int row = 1; row <= 4; row += 1) 
	{
		for (int col = 1; col <= row; col += 1)
			cout << "* ";
		cout << "\n";
	}
	return 0;
}