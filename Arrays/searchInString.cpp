#include <iostream>
#include <string>
using namespace std;

int search(char ch[], char target) {
	for (int i = 0; i < 5; i += 1) {
		if (ch[i] == target) {
			return i;
		}
	}
	return -1;
}

int main() {
	
	char ch[] = {'f','a','r','z'};
	
	char target = 'g';
	// string name = "faraz";
	// cout << name[0] << endl;
	cout << search(ch,target);

	return 0;
}