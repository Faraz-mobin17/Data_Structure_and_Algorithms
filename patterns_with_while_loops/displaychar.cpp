#include <iostream>
using namespace std;

int main() {

	char ip;
	cin >> ip;

	if (ip >= 'a' && ip <= 'z')
		cout << "lowercase char";
	else if (ip >= 'A' && ip <= 'Z')
		cout << "Uppercase";
	else 
		cout << "numeric";


	return 0;
}