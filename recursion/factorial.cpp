#include <iostream>
using namespace std;

int myFact(int n)
{
    if (n <= 1)
        return 1;
    else 
        return n * myFact(n - 1);
}

int main() {
    int n;
    cout << "ENter positive value: " << endl;
    cin >> n;

    cout << "Factorial is: " << myFact(n) << endl;
    return 0;
}
