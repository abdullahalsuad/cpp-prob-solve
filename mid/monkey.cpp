#include <bits/stdc++.h>
using namespace std;

int main()
{
    string word;
    while (cin >> word)
    {
        sort(word.begin(), word.end());
        cout << word;
    }
    cout << "\n";
    return 0;
}

// #include <iostream>
// #include <sstream>
// #include <algorithm>
// #include <string>
// using namespace std;

// int main()
// {
//     string input;

//     while (getline(cin, input))
//     {
//         stringstream ss(input);
//         string word, result;

//         while (ss >> word)
//         {
//             sort(word.begin(), word.end());
//             result += word;
//         }

//         sort(result.begin(), result.end());

//         cout << result << endl;
//     }

//     return 0;
// }
