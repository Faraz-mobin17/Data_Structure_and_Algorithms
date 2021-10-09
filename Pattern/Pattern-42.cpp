// 36.
// *       *
//  *     *
//   *   *
//    * *
//     *
//    * *
//   *   *
//  *     *
// *       *


#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;



    for (int row = 1; row <= 2*n-1; row += 1) {
        for (int col = 1; col <= 2 * n; col += 1) {
            if (col == row || col == 2 * n - row) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}