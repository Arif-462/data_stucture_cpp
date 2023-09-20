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
            a = head;
        }
        a->next = head;
        head = a;

    }
    int getSize()
    {
        return size;
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
    void findIndex(int index)
    {
        Node* a = head;
        int idx = 0;
        while(a != NULL)
        {
            if(idx==index)
            {

                cout<<a->value<<endl;

            }
            a=a->next;

            idx++;
        }
    }

};
int main()
{
    LinkedList ll;
    ll.InsetAtHead(5);
    ll.InsetAtHead(4);
    ll.InsetAtHead(3);
    ll.InsetAtHead(2);
    ll.InsetAtHead(1);
    cout<<"Total size = "<<ll.getSize()<<endl;
    //ll.Traverse();
    ll.findIndex(2);
    return 0;
}
