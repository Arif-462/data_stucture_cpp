
#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 500; /// Glowbaly declare korte hobe

class Stack
{
public:

    int a [MAX_SIZE];
    int stack_size;

    //constractor declare
    Stack()
    {
        stack_size = 0;

    }

    // Add an ement int stackO(1)
    void push(int value)
    {
        if(stack_size+1 > MAX_SIZE)
        {
            cout<<"Stack is full!\n";
            return ;
        }

        stack_size = stack_size + 1;
        a[stack_size - 1] =value;
    }

    // Delete the top most element from the stack
    void pop()
    {
        if(stack_size == 0)
        {
            return;
        }
        a[stack_size - 1] = 0;
        stack_size = stack_size - 1;
    }

    //Return the top most element from the stack
    int top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        return a[stack_size - 1];
    }


};

int main()
{
    Stack st;
    st.push(10);
    cout<<st.top()<<"\n";
    st.push(20);
    cout<<st.top()<<"\n";
    st.push(30);
    cout<<st.top()<<"\n";

    cout<<endl;
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    return 0;
}
