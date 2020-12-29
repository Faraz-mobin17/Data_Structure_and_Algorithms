#include <iostream>
using namespace std;

int main() {
    int arr[5] = {1,2,3,4,5};
    int key;
    cout << "Enter the element to be search\n";
    cin >> key;
    for (int i = 0; i <= 5; i += 1)
        if (key == arr[i])
            cout << "ELEMENT FOUND AT : " << i << " th INDEX" << endl;
        else
            cout << "Element is not at: " << i << " th index" << endl;

return 0;
}
