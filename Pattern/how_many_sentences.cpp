#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



/*
 * Complete the 'countSentences' function below.
 *
 * The function is expected to return a LONG_INTEGER_ARRAY.
 * The function accepts following parameters:
 *  1. STRING_ARRAY wordSet
 *  2. STRING_ARRAY sentences
 */

vector<long> countSentences(vector<string> wordSet, vector<string> sentences) {
    
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string wordSet_count_temp;
    getline(cin, wordSet_count_temp);

    int wordSet_count = stoi(ltrim(rtrim(wordSet_count_temp)));

    vector<string> wordSet(wordSet_count);

    for (int i = 0; i < wordSet_count; i++) {
        string wordSet_item;
        getline(cin, wordSet_item);

        wordSet[i] = wordSet_item;
    }

    string sentences_count_temp;
    getline(cin, sentences_count_temp);

    int sentences_count = stoi(ltrim(rtrim(sentences_count_temp)));

    vector<string> sentences(sentences_count);

    for (int i = 0; i < sentences_count; i++) {
        string sentences_item;
        getline(cin, sentences_item);

        sentences[i] = sentences_item;
    }

    vector<long> result = countSentences(wordSet, sentences);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << "\n";
        }
    }

    fout << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
