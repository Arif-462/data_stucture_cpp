
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* next;

};
class LinkedList{
public:
    Node* head;
    int size=0;

    LinkedList()
    {
        head=NULL;
        size=0;
    }


    Node* CreateNewNode(int value)
    {
        Node* newnode = new Node;
        newnode->value = value;
        newnode->next = NULL;

        return newnode;
    }

    void InsetAtHead(int value)
    {
        size++;
        Node* a = CreateNewNode(value);

        if(a == NULL)
        {
            head = a;
            return;
        }

        a->next = head;
        head = a;
    }

    void RemoveFiratElement()
    {
        size--;
         Node* a = head;
        if(a == NULL)
        {
            return;
        }
        head = a->next;
        delete a;


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

    int getSize()
    {
        return size;
    }

};

int main()
{
    LinkedList c;

    c.InsetAtHead(5);
    c.InsetAtHead(4);
    c.InsetAtHead(3);
    c.InsetAtHead(2);
    c.InsetAtHead(1);


    c.RemoveFiratElement();

    c.Traverse();
    cout<<"Size = "<<c.getSize()<<endl;

    return 0;
}

