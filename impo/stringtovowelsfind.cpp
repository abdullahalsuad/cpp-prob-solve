#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    char arr[N];

    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    // int count = 0;
    int index = 0;
    char vowels[index];
    // int vowels[count];
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' ||
            arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' ||
            arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
        {
            // count += 1;
            // vowels[i] = arr[i];
            vowels[index++] = arr[i];
        }
    }
    // cout << "count" << count;

    for (int i = 0; i < index; i++)
    {
        cout << vowels[i];
    }

    return 0;
}