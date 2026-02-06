#include <iostream>
using namespace std;
int main()
{
    int a[]={5 , 3 , 34 , 13 ,2};
    int len = sizeof(a)/sizeof(a[0]);
    for(int i = 0; i<len; i++)
    {
        for(int j = 1;j<len ; j++)
        {
            if (a[j] < a[j-1])
            {
                int temp = a[j];
                a[j] = a[j-1];
                a[j-1] = temp;
            }
        }
    }
    for(int i =0; i<len; i++)
    {
        cout<<a[i]<< " "; 
    }
    return 0;
}