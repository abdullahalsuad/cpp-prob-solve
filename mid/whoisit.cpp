#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int Id;
    char Name[101];
    char Section;
    int Marks;
};
int main()
{

    int t;
    cin >> t;
    for (int tc = 0; tc < t; tc++)
    {
        Student highstdent;
        highstdent.Marks = -1;

        for (int i = 0; i < 3; i++)
        {
            Student newstdent;
            cin >> newstdent.Id >> newstdent.Name >> newstdent.Section >> newstdent.Marks;

            if (newstdent.Marks > highstdent.Marks ||
                (newstdent.Marks == highstdent.Marks && newstdent.Id < highstdent.Id))
            {
                highstdent = newstdent;
            }
        }
        cout << highstdent.Id << " " << highstdent.Name << " " << highstdent.Section << " " << highstdent.Marks << endl;
    }

    return 0;
}