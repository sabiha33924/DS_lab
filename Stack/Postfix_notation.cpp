#include <iostream>
#include <stack>
using namespace std;

int main()
{
    string postfix = "34+5*";
    stack<int> st;

    for (int i = 0; postfix[i]; i++)
    {
        if (isdigit(postfix[i]))
        {
            st.push(postfix[i] - '0');
        }
        else
        {
            int x = st.top();
            st.pop();
            int y = st.top();
            st.pop();
            int z;

            switch (postfix[i])
            {
            case '+':
                z = x + y;
                break;
            case '-':
                z = x - y;
                break;
            case '*':
                z = x * y;
                break;
            case '/':
                z = x / y;
                break;
            }
            st.push(z);
        }
    }

    cout << st.top() << endl;
}