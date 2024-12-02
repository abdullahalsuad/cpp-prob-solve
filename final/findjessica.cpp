#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a;
    getline(cin, a);
    string word = "Jessica";

    stringstream ss(a);
    string currentstr;
    int found = 0;

    while (ss >> currentstr)
    {
        if (currentstr == word)
        {
            found = 1;
            break;
        }
    }

    if (found)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}