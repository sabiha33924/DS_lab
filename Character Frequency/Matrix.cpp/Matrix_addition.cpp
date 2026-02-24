#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;

    cout << "Enter rows and columns of Matrix A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of Matrix B: ";
    cin >> r2 >> c2;

    // Check addition condition
    if (r1 != r2 || c1 != c2)
    {
        cout << "Matrix addition not possible!";
        return 0;
    }

    int A[r1][c1], B[r2][c2], result[r1][c1];

    // Input Matrix A
    cout << "Elements of Matrix A:" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << "Row and column " << i << j << ": ";
            cin >> A[i][j];
        }
    }

    // Input Matrix B
    cout << "Elements of Matrix B:" << endl;
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << "Row and column " << i << j << ": ";
            cin >> B[i][j];
        }
    }

    // Matrix Addition
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            result[i][j] = A[i][j] + B[i][j];
        }
    }

    // Print Result
    cout << "Result Matrix (A + B):" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}