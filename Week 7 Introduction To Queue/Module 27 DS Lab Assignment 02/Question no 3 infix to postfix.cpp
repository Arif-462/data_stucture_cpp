#include <bits/stdc++.h>
using namespace std;

//Function to find precedence
int prec(char ch)
{
    if (ch == '/' || ch == '*')
        return 2;
    else if (ch == '+' || ch == '-')
        return 1;
    else
        return -1;
}

//Function to convert infix to postfix expression
void infixToPostfix(string s)
{
    stack<char> st;
    string ans;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
        {
            ans += ch;
        }

        else if (ch == '(')
        {
            st.push('(');
        }

        else if (ch == ')')
        {
            while (st.top() != '(')
            {
                ans += st.top();
                st.pop();
            }
            st.pop();
        }

        else
        {
            while (!st.empty()
                    && prec(s[i]) <= prec(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    cout << ans << endl;
}

//main Function
int main()
{
    string s;
    cin>>s;

    infixToPostfix(s);

    return 0;
}
