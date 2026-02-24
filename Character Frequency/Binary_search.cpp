#include <iostream>
using namespace std;

int main()
{
    // Sorted array
    int a[] = {2, 13, 32, 34, 90};
    int len = sizeof(a) / sizeof(a[0]);

    int start = 0, end = len - 1;
    int mid, target;
    int not_found = 1;

    cout << "Enter target: ";
    cin >> target;

    // Binary Search
    while (start <= end)
    {
        mid = (start + end) / 2;

        if (a[mid] == target)
        {
            cout << "Found at index: " << mid << endl;
            not_found = 0;
              break;
        }
        else if (a[mid] > target)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }

    if (not_found == 1)
    {
        cout << "Not found" << endl;
    }

    return 0;
}