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
    int lsum = l.math_marks + l.eng_marks;
    int rsum = r.math_marks + r.eng_marks;

    return (lsum == rsum) ? (l.id < r.id) : (lsum > rsum);
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