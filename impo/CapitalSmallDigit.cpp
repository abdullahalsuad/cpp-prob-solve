#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if ('A' <= ch && ch <= 'Z')
    {

        cout << "ALPHA" << "\n";
        cout << "IS CAPITAL";
    }
    else if ('a' <= ch && ch <= 'z')
    {

        cout << "ALPHA" << "\n";
        cout << "IS SMALL";
    }
    else
    {
        cout << "IS DIGIT";
    }
    return 0;
}