#include <bits/stdc++.h>
using namespace std;

void powerSet(string str)
{
	int n = str.length();
	int powerSize = pow(2,n);
	for (int counter = 0; counter < powerSize; counter++)
	{
		for (int j = 0; j < n; j +=1 )
			if (counter & ( 1 << j ) != 0)
				cout << str[j] << "\n";
	}
	cout << "\n";
}

int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin >> t;
	while (t--)
	{
		string n;
		cin >> n;
		int answer = powerSet(n);
		cout << answer << endl;
	}
	return 0;
}