#include <iostream>
using namespace std;
int main()
{
    int r,c;
    cout << "Enter Row and Column of Matrix" ;
    cin >> r >> c;
    int A[r][c];
    cout << "Enter Element of matrix" << endl;
    for(int i = 0; i<r; i++)
    {
        for(int j = 0; j<c; j++)
        {
            cout << "Row and Column" << i << j << " ";
            cin >> A[i][j];
        }
    }
    for(int i = 0; i<r; i++)
    {
        int sum = 0;
        for(int j = 0; j<c; j++)
        {
            sum += A[i][j];
        }
        cout << "Sum of Row" << i << "=" << sum << endl;
    }
    return 0;
}