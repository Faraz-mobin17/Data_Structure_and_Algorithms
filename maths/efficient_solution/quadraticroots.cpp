#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

class Solution {
    public:
    vector<int> quadraticRoots(int a,int b, int c) {
        vector<int> roots;
        int root1 = 0,root2 = 0;
        int d = (pow(b,2) - 4 * a * c);
        if (d < 0) 
            roots.push_back(-1);
        else {
            root1 = floor((-b + sqrt(d)) / (2 * a));
            root2 = floor((-b - sqrt(d)) / (2 * a));
            roots.push_back(max(root1,root2));
            roots.push_back(max(root1,root2));
        }
        return roots;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a,b,c;
        cin >> a >> b >> c;
         Solution ob;
         vector<int> roots = ob.quadraticRoots(a,b,c);
         if (roots.size() == 1 && roots[0] == -1)
             cout << "Imaginary";
         else
             for (int i = 0; i < roots.size(); i += 1)
                 cout << roots[i] << " ";
         cout << endl;
    }

    return 0;
}
