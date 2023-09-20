#include<bits/stdc++.h>
using namespace std;

class Node{
public:
    int value;
    Node* next;

};

class LinkedList{
public:
    Node* head;
    int size;
    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    Node* createNewNode(int value)
    {
        Node* newnode = new Node;
        newnode->value = value;
        newnode->next = NULL;
        return newnode;
    }
    void InsertAtHead(int value)
    {
        size++;
        Node* a = createNewNode(value);
        if(a == NULL)
        {
            a = head;
            return;
        }
        a->next = head;
        head = a;
    }

    void Traverse()
    {
        Node* a = head;
        while(a != NULL)
        {
            cout<<a->value;
            a = a->next;
            if(a != NULL)
            {
                cout<<",";
            }
        }
        cout<<endl;
    }

    void sorting()
    {
        Node* a = head;
        if(a == NULL)
        {
            return;
        }
        while(a != NULL)
        {
            if(a->value > a->next->value)
            {
                swap(a->value, a->next->value);
                a = a->next;
                a->next = a->next->next;
            }


        }
    }
    void display()
    {
        Node* a = head;
        if(a != NULL)
        {
            cout<<a->next->next->value;
        }
    }




};

int main()
{
    LinkedList l;
    l.InsertAtHead(3);
    l.InsertAtHead(1);
    l.InsertAtHead(5);
    l.InsertAtHead(2);
    l.InsertAtHead(4);
    l.Traverse();
    //l.display();
    l.sorting();
    l.Traverse();
    return 0;
}
