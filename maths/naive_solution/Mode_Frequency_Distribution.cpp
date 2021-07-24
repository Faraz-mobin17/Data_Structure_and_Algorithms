// program to find mode of a frequecy distribution
#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	/* code */
	int n;
	double start,interval;
	cout << "Enter n: " << endl;
	cin >> n;
	int f[n];
	int max_one = 0, max_two;

	cout << "Enter the start Value: " << endl;
	cin >> start;

	cout << "Enter the interval Value: " << endl;
	cin >> interval;

	cout << "Enter the value in f: " << endl;

	for (int i = 0; i < n; i += 1)
		cin >> f[i];
	max_two = f[0];

	for (int i = 1; i < n; i+= 1)
	{
		if (f[i] > max_two)
		{
			max_two = f[i];
			max_one = i;
		}
	}
		double l = (start + interval) * max_one;
		double fm,fm1,fm2;
		fm = f[max_one];
		fm1 = f[max_one + 1];
		fm2 = f[max_one - 1];
		cout << "L = " << l;
		cout << "fm = " << fm;
		cout << "fm+1 =" << fm1;
		cout << "fm-1 = " << fm2;

		double mode = l + (((fm - fm2)/ ((fm - fm2 ) + (fm - fm1))) * interval);

		cout<<"\nMode = "<<mode;

	return 0;
}