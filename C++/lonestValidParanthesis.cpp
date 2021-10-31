// Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.
// Example:
// Input: s = "(()"
// Output: 2
// Explanation: The longest valid parentheses substring is "()".

#include <iostream>
#include <stack>
using namespace std;
int main()
{
    cout<<"kbnjfb";
    string s = "(()";
    stack<int> st;
    st.push(-1);
    int n = s.length(), global = 0;
    for (int i = 0; i < n; i++)
    {
        // checking if chr is '(',if true then pushing into stack
        if (s[i] == '(')
            st.push(i);
        // if false then popping and updating global var if stack is not empty
        // if stack is empty then pushing current index into stack
        else
        {
            st.pop();
            if (!st.empty())
                global = max(global, i - st.top());
            else
                st.push(i);
        }
    }
    cout << global;

    return 0;
}
