#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    // test case
    for (int tc = 0; tc < T; tc++)
    {
        int N, sum;
        cin >> N >> sum;

        int arr[N];

        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }

        bool found = false;

                for (int i = 0; i < N - 2 && !found; ++i)
        {
            for (int j = i + 1; j < N - 1 && !found; ++j)
            {
                for (int k = j + 1; k < N && !found; ++k)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        found = true;
                    }
                }
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

        // cout << "Size " << N << " Sum " << sum << endl;
        // for (int i = 0; i < N; i++)
        // {
        //     cout << arr[i];
        // }
    }

    return 0;
}