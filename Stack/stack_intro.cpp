#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // stack initialization
    stack<int> st;
    cout << st.empty() << endl;

    st.push(10);
    st.push(20);
    st.push(110);
    st.push(13);
    st.push(11);

    // stack
    while (st.empty() != 1)
    {
        cout << st.top() << endl;
        st.pop();
    }
}

// palindrome 
// konok 
// racecar
// 10101
// madam

/* input = tisa
a
s
i
t
output = asit
*/