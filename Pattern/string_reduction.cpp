#include <bits/stdc++.h>

using namespace std;



/*
 * Complete the 'getMinDeletions' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts STRING s as parameter.
 */

int getMinDeletions(string s) {
    int temp = {};

    for (int i = 0; i < s.size(); i += 1) {
        for (int j = i + 1; j < s.size(); j += 1) {
            if (s[i] == s[j]) {
                temp[i] = s[i];
                s[i] = "";
            }
        }
    }
    return temp;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = getMinDeletions(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
