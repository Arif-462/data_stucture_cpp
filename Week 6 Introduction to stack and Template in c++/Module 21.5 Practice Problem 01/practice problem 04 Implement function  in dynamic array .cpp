#include<bits/stdc++.h>
using namespace std;

class Stack
{
public:
    int *a ;
    int stack_size;
    int capacity; // arrar er capasity koto

    //constractor declare
    Stack()
    {
        a = new int [1];
        capacity = 1;
        stack_size = 0;

    }

    // Makes the array capacity multiplied by 2
    void increase_size()
    {
        int *tmp;
        tmp = new int [capacity*2];
        for(int i=0; i<capacity; i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        delete []tmp;
        capacity = capacity * 2;
    }

    // Add an ement int stackO(1)
    void push(int value)
    {
        if(stack_size + 1 > capacity)
        {
            increase_size();
        }

        stack_size = stack_size + 1;
        a[stack_size - 1] = value;
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



