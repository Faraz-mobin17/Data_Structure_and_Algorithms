#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        double a,b,c,d,root1,root2,realPart,imaginaryPart;
        cin >> a >> b >> c;
        d = b * b - 4 * a * c;
        if (d > 0) {
            root1 = (-b + sqrt(d)) / (2 * a);
            root2 = (-b - sqrt(d)) / (2 * a );
            cout << floor(root1) << " " << floor(root2) << endl;
        } else if (d == 0) {
            root1 = root2 = -b/(2*a);
            cout << floor(root1) << " " << floor(root2) << endl;
        } else {
            cout << "Imaginary" << endl;
        }
    }
    return 0;
}
