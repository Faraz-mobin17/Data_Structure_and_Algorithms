// 23.        *      *
//          *   *  *   *
//        *      *      *
#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for( int row = 1; row <= n; row++ )
    {
        for( int col = 1; col <= ( n * n ); col++ )
        {
            if( ( ( row + col ) % 4 == 0) || ( row == 2 && ( col % 4 == 0) ) )
             cout<<"*" ;
            else
                cout<<" " ;
        }
        cout<<"\n";
    }
    cout << 2 % 4 << endl;
    return 0;
}