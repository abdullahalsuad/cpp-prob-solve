#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[6], arr2[6], res[6];
    // input fist array
    for (int i = 0; i < 6; i++)
    {
        cin >> arr1[i];
    }
    // input  array 2
    for (int i = 0; i < 6; i++)
    {
        cin >> arr2[i];
    }
    // reverse array 2
    for (int i = 0; i < 3; i++)
    {
        swap(arr2[i], arr2[5 - i]);
    }
    // Reversing  manually
    // for (int i = 0; i < 3; i++)
    // {
    //     int temp = arr2[i];
    //     arr2[i] = arr2[5 - i];
    //     arr2[5 - i] = temp;
    // }
    // multiply
    for (int i = 0; i < 6; i++)
    {
        res[i] = arr1[i] * arr2[i];
    }

    // output
    for (int i = 0; i < 6; i++)
    {
        cout << res[i] << " ";
    }

    return 0;
}