#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    double mark;

   Student(string n, int i, double m) : name(n), id(i), mark(m) {}
};

class Compare
{
public:
    bool operator()(Student a, Student b)
    {
        return a.mark > b.mark;
    }
};

int main()
{
    priority_queue<Student, vector<Student>, Compare> pq;

    int n;
    cin >> n;

    string name;
    int id;
    double mark;

    for (int i = 0; i < n; i++)
    {
        cin >> name >> id >> mark;

        pq.push(Student(name, id, mark));
    }

    cout << "---------ANSWER------------" << endl;

    int top3 = min(3, n);

    while (top3-- && !pq.empty())
    {
        Student s = pq.top();
        pq.pop();

        cout << s.name << " "
             << s.id << " "
             << s.mark << endl;
    }

    return 0;
}