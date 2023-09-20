#include <bits/stdc++.h>
using namespace std;

stack<int>sortStack(stack<int> &l)
{
    stack<int> a;

    while (!l.empty())
    {
        int tmp = l.top();
        l.pop();

        while (!a.empty() && a.top() > tmp)
        {
            l.push(a.top());
            a.pop();
        }
        a.push(tmp);
    }
    return a;
}


int main()
{
    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(6);
    st.push(2);
    st.push(5);

    // This is the temporary stack
    stack<int> a = sortStack(st);
    cout << "Sorted numbers are:\n";

    while (!a.empty())
    {
        cout << a.top();
        a.pop();
        if(!a.empty())
        {
            cout<<",";
        }
    }
}

/*
#include<bits/stdc++.h>
using namespace std;

// Template declare for doubly linked list
template<class T>

//doubly linked list declare
class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

// Template declare for doubly linked list class
template<class T>

class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }


    // Deletes data at head
    void deleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T>* a= head;
        node<T>* b= head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv=NULL;
        }
        head = b;
        sz--;

    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }
};

// Stack using in doubly linked list
template<class T>
class Stack
{
    public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    //display top/head value from linked list using stack.
    T top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!"<<" \n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    //push value into linked list using stack;
    void push(T value)
    {
        dl.InsertAtHead(value);
    }

    // from delete value from linked list using stack
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!"<<"\n";
            return;
        }
        dl.deleteAtHead();
    }
    int getSize()
    {
        return dl.getSize();
    }

};


int main()
{

    Stack<int>a;

    a.push(3);
    a.push(4);
    a.push(6);
    a.push(2);
    a.push(5);

    // Sort the stack
    Stack<int>tmp;
    while(a.getSize()>0)
    {
        int t = a.top();
        a.pop();
        while(tmp.getSize()>0)
        {
            if(tmp.top()<t)
            {
                break;
            }
            a.push(tmp.top());
            tmp.pop();
        }
        tmp.push(t);

        cout<<tmp.top()<<" ";

    }

    cout<<endl;
    swap(a,tmp);
    while(a.getSize()>0)
    {
        cout<<a.top()<<"";
        a.pop();
        if(a.getSize()>0)
            cout<<",";
    }

    return 0;
}
*/

