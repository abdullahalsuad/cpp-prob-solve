#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int num[N];
    for (int i = 0; i < N; i++)
    {
        cin >> num[i];
    }
    sort(num, num + N);
    for (int i = 0; i < N; i++)
    {
        cout << num[i] << " ";
    }
    cout << "\n";
    sort(num, num + N, greater<int>());
    for (int i = 0; i < N; i++)
    {
        cout << num[i] << " ";
    }

    return 0;
}