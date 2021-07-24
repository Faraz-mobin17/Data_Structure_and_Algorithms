// // program to fiNd mediaN of a frequecy distributioN

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	/* code */
	int N,START,interval;
	cout << "ENTER THE VALUE OF N: ";
	cin>> N;
	cout << "ENter the start: ";
	cin >> START;
	cout << "ENter the iNterval: ";
	cin >> interval;

	double x[N];
	double f[N];

	double sum_one = 0;
	double sum_two = 0;
	double cf[N];

	cout << "ENter the fi values: ";
	for (int i = 0; i < N; i += 1)
	{
		cin >> f[i];
		sum_one += f[i];
		cf[0] = f[0];
		if (i > 0)
			cf[i] = f[i] + cf[i - 1];
	}
	sum_two = sum_one / 2;
	int idx = 0;
	for (int i = 0; i < N; i += 1)
	{
		if (cf[i] < sum_two)
			idx += 1;
		else
			break;
	}
	double h = interval;
	double l = start + (interval * (idx));
	double c = cf[idx - 1];
	double F = f[idx];

	cout<<"\nl = "<<l;
	cout<<"\nh = "<<h;
	cout<<"\nc = "<<c;
	cout<<"\nf = "<<F;
	cout<<"\nN/2 = "<< sum_two;

	double mdn = l + h * ((sum_two - c)/F);

	cout<<"\nMedian : "<< mdn;

	return 0;
}