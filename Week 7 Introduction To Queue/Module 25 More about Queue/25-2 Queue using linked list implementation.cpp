#include<bits/stdc++.h>
using namespace std;
// Queue using linked list

class node{
public:
    int data;
    node* next;

};

class Queue{
public:
    node* head;
    node* tail;
    int sz;

    Queue()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* CreateNewnode(int value)
    {
        sz++;
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        return newNode;
    }

    void enqueue(int value)
    {
        node* newNode = CreateNewnode(value);
        if(head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }

        tail->next = newNode;
        tail = newNode;

    }

    void dequeue()
    {
        if(sz == 0)
        {
            cout<<"Node is empty\n";
            return;
        }
        if(sz == 1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        node* a = head;
        head = head->next;
        sz--;
        delete a;

    }

    int front()
    {
        if(sz == 0)
        {
            cout<<"node is empty\n";
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
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    cout<<"Q size = "<<q.size()<<"\n";

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<q.front()<<"\n";
    q.dequeue();

    cout<<"Q size = "<<q.size()<<"\n";


    return 0;
}

