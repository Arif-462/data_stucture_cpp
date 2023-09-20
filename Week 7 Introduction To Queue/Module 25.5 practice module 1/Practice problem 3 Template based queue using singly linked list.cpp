#include<bits/stdc++.h>
using namespace std;

template<class T>

class node{
public:
    T data;
    node<T>* next;
};

template<class T>
class Queue{
public:
    node<T>* head;
    node<T>* tail;
    int sz;

    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node<T>* CreateNewnode(T value)
    {
        node<T>* newnode = new node<T>;
        newnode->data = value;
        newnode->next = NULL;
        return newnode;
    }

    void enqueue(T value)
    {
        sz++;
        node<T>* newnode = CreateNewnode(value);
        if(head==NULL)
        {
            head=newnode;
            tail=newnode;
            return;
        }
        tail->next = newnode;
        tail=newnode;
        return;
    }

    void dequeu()
    {
        if(sz==0)
        {
            cout<<"Queue is empty\n";
            return;
        }
        if(sz==1)
        {
            node<T>* a = head;
            head=NULL;
            tail=NULL;
            sz--;
            delete a;
            return;
        }
        node<T>* a = head;
        head = head->next;
        delete a;
        sz--;
        return;
    }

    T front()
    {
        if(sz==0)
        {
            cout<<"Q is empty\n";
            return -1;
        }
        return head->data;
    }

    int size()
    {
        return sz;
    }
};

int main()
{
    //integer queue
    Queue<int> q;
    q.enqueue(10);
    q.enqueue(5);
    q.enqueue(8);

    cout<<"Q size = "<< q.size()<<"\n";

    cout<<q.front()<<"\n";
    q.dequeu();
    cout<<q.front()<<"\n";
    q.dequeu();
    cout<<q.front()<<"\n";
    q.dequeu();

    cout<<"Q size = "<< q.size()<<"\n";

    // characte queue
    Queue<char> c;
    c.enqueue('a');
    c.enqueue('b');
    c.enqueue('c');

    cout<<"Q size = "<< c.size()<<"\n";

    cout<<c.front()<<"\n";
    c.dequeu();
    cout<<c.front()<<"\n";
    c.dequeu();
    cout<<c.front()<<"\n";
    c.dequeu();

    cout<<"Q size = "<< c.size()<<"\n";
    return 0;
}
