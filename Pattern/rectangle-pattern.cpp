#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cin >> row >> col;

    for (int i = 0; i<row; i +=1 )
    {
        for (int j = 0; j < col; j += 1)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}