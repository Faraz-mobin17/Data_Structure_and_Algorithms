#include <iostream>

using namespace std;

int sum(int n)
{
    int answer=0;
    for (int i = 1; i <= n; i += 1)
        answer += i;
    return answer;
}

int32_t main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}