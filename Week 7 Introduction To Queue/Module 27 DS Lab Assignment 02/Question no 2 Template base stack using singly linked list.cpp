#include<bits/stdc++.h>
using namespace std;

template<class T>
class node
{
public:
    T data;
    node<T>* nxt;
};

template<class T>
class Stack
{
public:
    node<T>* head;
    int sz;

    Stack()
    {
        head=NULL;
        sz=0;
    }

    node<T>* CreateNewnode(T value)
    {
        node<T>* newNode = new node<T>;
        newNode->data = value;
        newNode->nxt = NULL;
        return newNode;
    }

    void push(T value)
    {
        sz++;
        node<T>* newNode = CreateNewnode(value);
        if(head==NULL)
        {
            head = newNode;
            return;
        }
        node<T>* a = head;
        newNode->nxt = a;
        head = newNode;
    }
    void pop()
    {
        if(sz==0)
        {
            cout<<"Stack is empty\n";
            return;
        }
        if(sz==1)
        {
            delete head;
            // head=NULL;
            sz--;
            return;
        }
        node<T>* a = head;
        node<T>* b = head->nxt;
        delete a;
        sz--;
        head = b;
    }
    T Top()
    {
        if(sz==0)
        {
            cout<<"Stack is empty\n";
            return -1;
        }
        return head->data;
    }

    int getSize()
    {
        return sz;
    }

};
int main()
{
    Stack<int> st;

    st.push(10);
    cout<<st.Top()<<endl;
    st.push(20);
    cout<<st.Top()<<endl;
    st.push(30);
    cout<<st.Top()<<endl;

    cout<<"size = "<<st.getSize()<<endl;

    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    st.pop();

    cout<<"size = "<<st.getSize()<<endl;

    cout<<endl;
    //Character stack
    Stack<char> c;

    c.push('a');
    cout<<c.Top()<<endl;
    c.push('b');
    cout<<c.Top()<<endl;
    c.push('c');
    cout<<c.Top()<<endl;

    cout<<"size = "<<c.getSize()<<endl;

    cout<<c.Top()<<endl;
    c.pop();
    cout<<c.Top()<<endl;
    c.pop();
    cout<<c.Top()<<endl;
    c.pop();

    cout<<"size = "<<c.getSize()<<endl;


    return 0;
}
