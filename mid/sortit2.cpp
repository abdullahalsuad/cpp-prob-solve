#include <bits/stdc++.h>
using namespace std;

int *sort_it(int n)
{
    int *num = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }
    sort(num, num + n, greater<int>());
    return num;
}

int main()
{
    int N;
    cin >> N;
    int *num_f = sort_it(N);
    for (int i = 0; i < N; i++)
    {
        cout << num_f[i] << " ";
    }

    return 0;
}