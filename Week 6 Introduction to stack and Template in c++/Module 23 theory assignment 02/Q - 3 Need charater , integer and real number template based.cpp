#include<bits/stdc++.h>
using namespace std;


template<class T>

class Stack
{
public:

    T *a ;
    int stack_size;
    int capacity;

    //constractor declare
    Stack()
    {
        a = new T [1];
        capacity = 1;
        stack_size = 0;

    }

    // Makes the array capacity multiplied by 2
    void increase_size()
    {
        T *tmp;
        tmp = new T [capacity*2];
        for(int i=0; i<capacity; i++)
        {
            tmp[i] = a[i];
        }
        swap(a,tmp);
        delete []tmp;
        capacity = capacity * 2;
    }

    // Add an ement int stackO(1)
    void push(T value)
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
        stack_size = stack_size - 1;
    }

    //Return the top most element from the stack
    T top()
    {
        if(stack_size == 0)
        {
            cout<<"Stack is empty!\n";
            //return -1;
            //assert(false); //programe crush kore
            T a;
            return a;
        }
        return a[stack_size - 1];
    }


};

int main()
{
    //Character stack,
    cout<<"\ncharacter stack : \n";
    Stack<char> ch;
    ch.push('a');
    cout<<ch.top()<<"\n";
    ch.push('b');
    cout<<ch.top()<<"\n";
    ch.push('c');
    cout<<ch.top()<<"\n";

    ch.pop();
    cout<<ch.top()<<"\n";
    ch.pop();
    cout<<ch.top()<<"\n";
    ch.pop();
    cout<<ch.top()<<"\n";


    // Intergers stack.
    cout<<"\nInteger Number stack : \n";
    Stack<int> it;
    it.push(10);
    cout<<it.top()<<"\n";
    it.push(20);
    cout<<it.top()<<"\n";
    it.push(30);
    cout<<it.top()<<"\n";

    it.pop();
    cout<<it.top()<<"\n";
    it.pop();
    cout<<it.top()<<"\n";
    it.pop();
    cout<<it.top()<<"\n";


    //Real Numbers stack.
    cout<<"\nReal Nuber stack : \n";
    Stack<double> st;
    st.push(12.7);
    cout<<st.top()<<"\n";
    st.push(20.2);
    cout<<st.top()<<"\n";
    st.push(30.4);
    cout<<st.top()<<"\n";

    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";
    st.pop();
    cout<<st.top()<<"\n";

    return 0;
}

