#include <bits/stdc++.h>
using namespace std;

class Students
{
public:
    string nm;
    int cls;
    string s;
    int id;
    int math_marks;
    int eng_marks;
};
bool comp(Students l, Students r)
{
    if (l.eng_marks == r.eng_marks)
    {
        if (l.math_marks == r.math_marks)
        {
            return l.id < r.id;
        }
        return l.math_marks > r.math_marks;
    }
    return l.eng_marks > r.eng_marks;

    // return (l.eng_marks == r.eng_marks)
    //            ? ((l.math_marks == r.math_marks) ? (l.id < r.id) : (l.math_marks > r.math_marks))
    //            : (l.eng_marks > r.eng_marks);
}
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
            newStudent[i].id >>
            newStudent[i].math_marks >>
            newStudent[i].eng_marks;
    }
    sort(newStudent, newStudent + N, comp);
    for (int i = 0; i < N; i++)
    {
        cout << newStudent[i].nm << " "
             << newStudent[i].cls << " "
             << newStudent[i].s << " "
             << newStudent[i].id << " "
             << newStudent[i].math_marks << " "
             << newStudent[i].eng_marks
             << endl;
    }

    return 0;
}