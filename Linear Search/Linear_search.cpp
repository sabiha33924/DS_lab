#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of element:";
    cin>>n;
    int a[n];
    cout << "Enter the elements:";
    for(int i=0; i<n;i++)
    {
        cin >> a[i]; 
    }
    int found=0;
    int key;
    cout << "Enter the element to scarch:";
    cin >> key;
    for(int i=0; i<n; i++)
    {
        if(a[i]==key)
        {
            cout << "The Element is found at" <<" "<< i << endl;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "The element is not found" << endl;
    }
    return 0;
}