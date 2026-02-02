#include <iostream>
#include <string>
using namespace std;

int main()
{
    string name;
    cin >> name;
    char ch;
    cin >> ch;
    int not_found = 1;
    for(int i = 0 ; name[i]; i++)
    {
        if(name[i]==ch)
        {
            cout << ch << " " << "is founded" << endl;
            not_found=0;
            break;
        }
    }
    if(not_found)
    {
        cout << "Not Found" << endl;
    }
    return 0;
}
