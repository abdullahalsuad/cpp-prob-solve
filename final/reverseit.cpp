#include <bits/stdc++.h>
using namespace std;
class Students
{
public:
    string nm;
    int cls;
    string s;
    int id;
};

int main()
{
    int N;
    cin >> N;
    Students newStudent[N];
    for (int i = 0; i < N; i++)
    {
        cin >> newStudent[i].nm >>
            newStudent[i].cls >>
            newStudent[i].s >>
            newStudent[i].id;
    }
    for (int i = 0; i < N / 2; ++i)
    {
        swap(newStudent[i].s, newStudent[N - 1 - i].s);
    }

    for (int i = 0; i < N; i++)
    {
        cout << newStudent[i].nm << " "
             << newStudent[i].cls << " "
             << newStudent[i].s << " "
             << newStudent[i].id << " "
             << endl;
    }

    return 0;
}