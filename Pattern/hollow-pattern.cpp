#include <iostream>
using namespace std;

int main()
{
    int row,col;
    cin >> row >> col;

    for ( int i = 1; i <= row; i += 1 )
    {
        for ( int j = 1; j <= col; j += 1 )
        {
            if ( i == 1 || i == row || j == 1 || j == col )
            {
                cout << "*";
            } 
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}