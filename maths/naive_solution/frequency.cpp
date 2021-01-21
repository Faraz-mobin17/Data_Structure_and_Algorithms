#include <iostream>
using namespace std;

void sum(int xi[],int fi[], int n)
{
	float sum_fi = 0,sum_xi = 0,sum_fi_xi = 0;
	int mul[n];

	for (int i = 0; i < n; i += 1)
	{
		sum_fi += fi[i];
		sum_xi += xi[i];
		mul[i] = xi[i] * fi[i];
		sum_fi_xi += mul[i];
	}
	
	cout << "Mean: " << sum_fi_xi / sum_fi;
}


int main(int argc, char const *argv[])
{
	/* code */
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		int xi[n];
		int fi[n];
		cout << "insert value in xi\n";
		for (int i = 0; i < n; i += 1)
			cin >> xi[i];
		cout << "Insert value in fi\n";
		for (int i = 0; i < n; i += 1)
			cin >> fi[i];

		sum(xi,fi,n);
	}

	return 0;
}