#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;

    for (int tc = 0; tc < t; tc++)
    {
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int min_result = INT_MAX;
        for (int i = 0; i < n; i++)
        {

            for (int j = i + 1; j < n; j++)
            {
                int re = arr[i] + arr[j] + j - i;
                min_result = min(min_result, re);
            }
        }
        cout << min_result << endl;
    }

    return 0;
}