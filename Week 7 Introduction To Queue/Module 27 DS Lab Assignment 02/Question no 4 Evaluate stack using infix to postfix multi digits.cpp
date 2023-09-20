#include<bits/stdc++.h>
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

//Function to convert infix to postfix conversion
string infixToPostfix(string s)
{
    stack<char> st;
    string ans;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
        {
            ans += c;
        }

        else if (c == '(')
        {
            st.push('(');
        }

        else if (c == ')')
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
            while (!st.empty()&& prec(s[i]) <= prec(st.top()))
            {
                ans += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }
    return ans;
}

// Function to evaluate the postfix expression
int evaluate_P_Epression(string s)
{
    stack<int> st;
    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];


        if (c >= '0' && c <= '9')
        {
            int temp = (int)(c - '0');
            st.push(temp);
        }

        else
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            switch(c)
            {
            case '+':
                st.push(b + a);
                break;
            case '-':
                st.push(b - a);
                break;
            case '*':
                st.push(b * a);
                break;
            case '/':
                st.push(b / a);
                break;
            }
        }
    }
    return st.top();
}

// Main function
int main()
{
    string s;
    cin>>s;
    //cout<<infixToPostfix(s)<<endl;

    cout <<evaluate_P_Epression(infixToPostfix(s)) << endl;

    return 0;
}
