#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    while (cin >> word)
    {
        sort(word.begin(), word.end());
        cout << word;
    }
    cout << "\n";
    return 0;
}