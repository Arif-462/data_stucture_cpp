#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

class DoublyLinkedList{
public:

    Node* head;
    int size;

    DoublyLinkedList()
    {
        head=NULL;
        size=0;
    }

    Node* CreateNewNode(int value)
    {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = NULL;

        return newNode;
    }

    void InsertAtFront(int value)
    {
        size++;
        Node* newNode = CreateNewNode(value);

        if(head==NULL)
        {
            head=newNode;
            return;
        }

        Node* a = head;
        newNode->next = a;
        a->prev = newNode;
        head = newNode;
    }

    void Traverse()
    {
        Node* a = head;

        if(a==NULL)
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
        cout<<endl;
    }

    int getSize()
    {
        return size;
    }

    void DeleteLastIndex()
    {
        Node* a = head;
        int cur_idx = 0;

        while(a->next->next == NULL)
        {
            a = a->next;
        }
        a->next=head;
        a->prev=a->next;


        size--;
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

    dl.DeleteLastIndex();

    dl.Traverse();

    cout<<dl.getSize()<<" \n";
    return 0;
}
