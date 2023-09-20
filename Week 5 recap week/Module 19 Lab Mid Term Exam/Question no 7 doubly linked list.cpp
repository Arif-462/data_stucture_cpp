/*
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prv;
};
class doublyLinkedList{
public:
    node* head;
    int sz;
    doublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }
    node* CreateNewNode(int value)
    {
        node* newNode = new node;
        newNode->data = value;
        newNode->next = NULL;
        newNode->prv = NULL;
        return newNode;
    }
    void InsetAthead(int value)
    {
        sz++;
        node* newNode = CreateNewNode(value);
        if(head == NULL)
        {
            head = newNode;
            return;
        }
        node* a =head;
        newNode->next = a;
        a->prv = newNode;
        head = newNode;
    }
    void Traverse()
    {
        node* a = head;
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

    void swap(int i , int j)
    {
        node* a = head;
        if(i<1 || i>sz || j<1 || j>sz)
        {
            return;
        }

        node* b= head;
        node* c= head;
        for(int k = 0; k<i; k++)
        {
            b = b->next;
        }

        for(int k=0; k<j; k++)
        {
            c = c->next;
        }

        int d = b->data;
        b->data=c->data;
        c->data=d;
    }

    void deleteZero()
    {
       node* a = head;
        while(a != NULL)
        {
            if(a->data != 0)
            {
                cout<<a->data;

                if(a->next != NULL)
                {
                    cout<<",";
                }
            }
            a = a->next;
        }
        cout<<"\n";
    }
};
int main()
{
    doublyLinkedList dl;

    dl.InsetAthead(5);
    dl.InsetAthead(0);
    dl.InsetAthead(0);
    dl.InsetAthead(2);
    dl.InsetAthead(0);
    dl.Traverse();
    dl.swap(1,4);
    dl.Traverse();
    dl.deleteZero();

    return 0;
}

*/
#include<bits/stdc++.h>

using namespace std;



class node
{
public:
    int data;
    node * nxt;
    node * prv;
};

class DoublyLinkedList
{
public:
    node *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node * CreateNewNode(int data)
    {
        node *newnode = new node;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(int data)
    {
        sz++;
        node *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, int data)
    {
        if(index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(data);
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node *b = a->nxt;
        b->prv = newnode;
        a->nxt = newnode;
        sz++;
    }

    //Deletes the given index O(n)
    void Delete(int index)
    {
        if(index >= sz)
        {
            cout<<index<<" doesn't exist.\n";
            return;
        }
        node *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->prv;
        node *c = a->nxt;
        if(b!=NULL)
        {
            b->nxt = c;
        }
        if(c!= NULL)
        {
            c->prv = b;
        }
        delete a;
        if(index==0)
        {
            head = c;
        }
        sz--;
    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node *a = head;
        while(a!=NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    // Returns the size of linked list O(1)
    int getSize()
    {
        return sz;
    }


    //Reverse the doubly linked list O(n)
//    void Reverse()
//    {
//        if(head==NULL)
//        {
//            return;
//        }
//        node *a = head;
//        int cur_index = 0;
//        while(cur_index != sz-1)
//        {
//            a = a->nxt;
//            cur_index++;
//        }
//
//        // last index is in a
//        node *b = head;
//        while(b!= NULL)
//        {
//            swap(b->nxt, b->prv);
//            b = b->prv;
//        }
//        head = a;
//    }





    // swap index of doubly linked list
    void swap(int i, int j)
    {
        node* a = head;
        if(i<1 || i>sz || j<1 || j>sz)
        {
            return;
        }

        node* b= head;
        node* c= head;
        for(int k = 0; k<i; k++)
        {
            b = b->nxt;
        }

        for(int k=0; k<j; k++)
        {
            c = c->nxt;
        }

        int d = b->data;
        b->data=c->data;
        c->data=d;
    }

    // Delete 0 from doubly linked list
    void deleteZero()
    {
        node* a = head;
        while(a != NULL)
        {
            if(a->data != 0)
            {
                cout<<a->data;

                if(a->nxt != NULL)
                {
                    cout<<",";
                }
            }
            a = a->nxt;
        }
        cout<<"\n";
    }
};


int main()
{
    int i=1,j=4;

    DoublyLinkedList dl;

    vector<int>pos;
    int x,y,idx=0;
    cin>>y;
    for(int i=y-1; i>=0; i--)
    {
        cin>>x;
        dl.InsertAtHead(x);
        if(x == 0 )
        {
            pos.push_back(i);
        }
    }
    reverse(pos.begin(), pos.end());

    for(int i=0; i<pos.size(); i++)
    {
        //cout<<pos[i]<<" ";
        dl.Delete(pos[i]-i);
    }

    dl.Traverse();

    dl.swap(i, j);
    dl.deleteZero();


//    dl.InsertAtHead(5);
//    dl.InsertAtHead(0);
//    dl.InsertAtHead(0);
//    dl.InsertAtHead(2);
//    dl.InsertAtHead(0);

//    dl.Traverse();

//    dl.Reverse();

    return 0;
}


