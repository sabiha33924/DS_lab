#include <bits/stdc++.h>
using namespace std;

/*
For any number of student data given
find out top 3 mark wala students
*/

class Student
{
public:
    string name;
    int id;
    double mark;

    Student(string n, int id, double m) : name(n), id(id), mark(m) {}
};

int main()
{
    map<double, Student, greater<int> > map_std;
    map<double, Student>::iterator it;

    int n;
    cin >> n;

    string name;
    int id;
    double mark;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> id >> mark;
        map_std.insert({mark, Student(name, id, mark)});
    }

    int top3 = 3;
    cout << "---------ANSWER------------" << endl;

    for (it = map_std.begin(); it != map_std.end(); it++)
    {
        cout << it->second.name << " " << it->second.id << " " << it->second.mark << endl;
        top3--;
        if (top3 == 0)
        {
            break;
        }
    }
}