#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;

    for (int i = 0; i < N; i++)
    {
        string a, b;
        cin >> a >> b;

        int index = 0;
        while ((index = a.find(b, index)) != string::npos)
        {
            a.replace(index, b.length(), "#");
            index += 1;
        }

        cout << a << endl;
    }

    return 0;
}
