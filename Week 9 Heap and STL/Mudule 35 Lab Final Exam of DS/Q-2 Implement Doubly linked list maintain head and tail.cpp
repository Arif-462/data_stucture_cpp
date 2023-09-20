#include<bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node* prv;
    node* nxt;

};

class DoublyLinkedList{
public:
    node* head;
    node* tail;
    int sz;

    DoublyLinkedList()
    {
        head = NULL;
        tail = NULL;
        sz = 0;
    }

    node* CreateNewnode(int value)
    {
         node* newNode = new node;
         newNode->data = value;
         newNode->prv = NULL;
         newNode->nxt = NULL;

         return newNode;
    }

    void insertHead(int value)
    {
        sz++;
        node* newNode = CreateNewnode(value);

        if(head == NULL)
        {
            head = newNode;
            return;
        }
        node*a = head;
        newNode->nxt = a;
        a->prv = newNode;
        head = newNode;
    }

    void insertTail(int value)
    {
        sz++;
        node* newNode = CreateNewnode(value);

        if(head == NULL)
        {
            head = newNode;
            return;
        }
        node* a = head;
        while(a->nxt != NULL)
        {
            a = a->nxt;
        }
        a->nxt = newNode;
        newNode->prv = a;

    }

    void insertMid(int value)
    {
        node* a = head;
        int cur_idx = 0;

        while(cur_idx != Size()/2)
        {
            a = a->nxt;
            cur_idx++;
        }
        sz++;
        node* newNode = CreateNewnode(value);
        newNode->nxt = a->nxt;
        newNode->prv = a;

        node* b = a->nxt;

        a->nxt = newNode;

    }

    int Size()
    {
        return sz;
    }

    void print()
    {
        node* a = head;
        node* b = tail;
        if(a == NULL && b ==NULL)
        {
            return;
        }
        while(a != NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        while( b != NULL)
        {
            cout<<b->data<<" ";
            b = b->prv;
        }
        cout<<"\n";
    }


};
int main()
{
    DoublyLinkedList dl;

    dl.insertHead(1);
    dl.insertHead(2);
    dl.insertMid(25);
    dl.insertTail(0);
    dl.insertTail(9);

    dl.print();
    cout<<"Size of list  = "<<dl.Size()<<"\n";
    return 0;
}
