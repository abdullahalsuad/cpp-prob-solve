#include <iostream>
using namespace std;

int main()
{
    int s[5] = {1, 2, 3, 4, 5};
    for (int c : s)
    {
        cout << c << "\n";
    }
}