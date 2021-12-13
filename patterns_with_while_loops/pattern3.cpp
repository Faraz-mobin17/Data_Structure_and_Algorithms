#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	int i = 1;
	while (i <= n) {
		int j = 1;
		while (j <= n) {
			cout << n - j + 1 << " "; // print 123 123 123 use j
			j += 1;
		}
		cout << endl;
		i += 1;
	}
	return 0;
}