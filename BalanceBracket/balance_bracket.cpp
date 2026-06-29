#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string input;
    cin >> input;

    stack<char> st;
    bool is_valid = 1;

    for(int i = 0; input[i]; i++)
    {
        if(input[i] == '(' || input[i] == '[' || input[i] == '{')
        {
            st.push(input[i]);
        }
        else
        {
            if(st.empty())
            {
                is_valid = 0;
                break;
            }

            char top = st.top();
            st.pop();

            if((input[i] == ')' && top != '(') ||
               (input[i] == ']' && top != '[') ||
               (input[i] == '}' && top != '{'))
            {
                is_valid = 0;
                break;
            }
        }
    }

    if(!st.empty()) is_valid = 0;

    if(is_valid)
        cout << "valid" << endl;
    else
        cout << "invalid" << endl;

    return 0;
}