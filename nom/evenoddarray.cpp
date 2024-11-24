#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[6];
    cout << "Hello" << "\n";
    for (int i = 0; i < 6; i++)
    {
        cin >> array[i];
    }
    for (int i = 0; i < 5; i++)
    {
        (array[i] % 2 == 0) ? array[i] = 0 : array[i] = 1;
    }
    for (int i = 0; i < 6; i++)
    {

        cout << array[i] << " ";
    }

    return 0;
}