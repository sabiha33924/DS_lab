#include <iostream>
#include <stack>
using namespace std;

/// Palindrome = madam

int main()
{
    string input;
    cin >> input;
    stack<char> st;
    for (int i = 0; input[i]; i++)
    {
        st.push(input[i]);
    }

    bool is_palindrome = 1;

    for (int i = 0; input[i]; i++)
    {
        //cout << "stack top: " << st.top() << " | input char: " << input[i] << endl;
        if (st.top() != input[i])
        {
            cout << "Not Palindrome" << endl;
            is_palindrome = 0;
            break;
        }
        st.pop();
    }
    if (is_palindrome)
    {
        cout << "Palindrome" << endl;
    }
}