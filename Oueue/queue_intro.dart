#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);

    int target = 30;
    bool not_found = 1;
    while (!q.empty())
    {
        if (q.front() == target)
        {
            cout << "Value found!" << endl;
            not_found = 0;
            break;
        }
        q.pop();
    }
    if (not_found)
    {
        cout << "value not found!" << endl;
    }
    return 0;
}