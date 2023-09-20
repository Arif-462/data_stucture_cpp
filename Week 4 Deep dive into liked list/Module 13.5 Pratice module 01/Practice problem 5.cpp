#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    Node* next;

};
class LinkedList
{
public:
    Node* head;
    int size;

    LinkedList()
    {
        head = NULL;
        size = 0;
    }

    Node* CreatNewNode(int value)
    {
        Node* newnode = new Node;
        newnode->value = value;
        newnode->next = NULL;
        return newnode;
        delete newnode;
    }
    void InsertAtHead(int value)
    {
        Node* a = CreatNewNode(value);
        if(a == NULL)
        {
            a = head;
        }
        size++;
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

    void get_size()
    {
        cout<< size<<endl;
    }

    void InsertAtBack(int value)
    {
        size++;
        Node* a = head;
        if(a == NULL)
        {
            a = CreatNewNode(value);
            return;
        }
        while(a->next != NULL)
        {
            a = a->next;
        }
        a->next = CreatNewNode(value);

    }


};
int main()
{
    LinkedList l;

    l.InsertAtHead(5);
    l.InsertAtHead(4);
    l.InsertAtHead(3);
    l.InsertAtHead(2);
    l.InsertAtHead(1);
    l.InsertAtBack(0);
    l.Traverse();
    //l.get_size();
    return 0;
}
