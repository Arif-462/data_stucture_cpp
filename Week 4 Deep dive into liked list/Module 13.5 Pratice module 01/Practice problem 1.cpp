
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

    void AddNewElement_front(int value)
    {
        size++;
         Node* a = CreateNewNode(value);
        if(a == NULL)
        {
            head = a;
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
    c.InsetAtHead(0);
    //c.AddNewElement_front(0);

    c.Traverse();
    cout<<"Size = "<<c.getSize()<<endl;

    return 0;
}


///*
/*

#include<bits/stdc++.h>
using namespace std;



int main()
{
    list<int>l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_front(0);

   //l.sort();

//    cout<<l.front();
//    cout<<l.back();
//    l.pop_front();
//    l.pop_back();

    for(auto it=l.begin(); it != l.end(); it++)
    {

        cout<<*it<<" ";
    }
    return 0;
}

//*/
