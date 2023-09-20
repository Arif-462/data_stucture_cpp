#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList
{
public:
    Node* head;
    int sz;
    DoublyLinkedList()
    {
        head=NULL;
        sz=0;

    }

    Node* CreateNewNode(int value)
    {
        Node* newNode=new Node;
        newNode->data=value;
        newNode->next=NULL;
        newNode->prev=NULL;
        return newNode;
    }

     void InsertAtFront(int value)
    {
        sz++;
        Node* newNode = CreateNewNode(value);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        Node*a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    void TravarseList()
    {
        Node* a = head;
        if(a == NULL)
        {
            return;
        }
        while(a != NULL)
        {
            cout<<a->data;
            a = a->next;
            if(a != NULL)
            {
                cout<<",";
            }
        }
        cout<<"\n";
    }

    int getSize()
    {
        return sz;
    }
};


int main()
{
    DoublyLinkedList dl;

    dl.InsertAtFront(5);
    dl.InsertAtFront(4);
    dl.InsertAtFront(3);
    dl.InsertAtFront(2);
    dl.InsertAtFront(1);
    dl.InsertAtFront(0);

    dl.TravarseList();

    cout<<dl.getSize()<<"\n";

    return 0;
}
