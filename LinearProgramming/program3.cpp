#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
	float a,b,c,d,y,x,S,T;
	cout << "Enter the value of a b c d\n";
	cin >> a >> b >> c >> d;
	cout << "Enter the value of S and T\n";
	cin >> S >> T;
	cout << "First Line: " << a << "x+" << b << "y" << "=" << S << endl;
	cout << "Second Line: " << c << "x+" << d << "y" << "=" << T << endl;
	y = (c * S) - (a * T) / (b * c) - (a * d);
	x = (T - d * y) / c;
	cout << "Value of x: " << x << endl;
	cout << "value of y is " << y << "\n";
	return 0;
}