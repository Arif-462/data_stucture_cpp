/*
#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* nxt;
    Node(int value)
    {
        this->value = value;
        this->nxt = NULL;
    }
};

Node* head = NULL;

Node* insertValue()
{
    int value;
    cin>>value;
    Node* head = NULL;
    while(value != -1)
    {
        Node* newNode = new Node(value);
        if(head==NULL)
        {
            head=newNode;
        }
        else
        {
            Node* tmp = head;
            while(tmp->nxt != NULL)
            {
                tmp=tmp->nxt;
            }
            tmp->nxt=newNode;
        }
        cin>>value;
    }
    return head;
}



int getLast(Node* head)
{

    Node* a = head;
    if(head == NULL)
    {
        return -1;
    }
    while(a != NULL)
    {
        a = a->nxt;
        if(a->nxt==NULL)
        {
            return a->value;
        }

    }
    return -1;
}

void display(Node* head)
{
    if(head==NULL)
    {
        return;
    }
    while(head != NULL)
    {
        cout<<head->value<<" ";
        head = head->nxt;
    }
}

void insertAtTail(Node* &head, int value)
{
    Node *newNode = new Node(value);
    if(head == NULL)
    {
        head = newNode;
        return;
    }

    Node* tmp = head;
    while(tmp->nxt != NULL)
    {
        tmp = tmp->nxt;
    }
    tmp->nxt = newNode;

}

double getAverage(Node* head)
{
    if(head==NULL)
    {
        return 0;
    }
    Node* a = head;

    int sum = 0;
    int sz=0;
    while(a != NULL)
    {
        sum += a->value;
        a = a->nxt;
        sz++;
    }
    double avg = (double)sum/sz;
    return avg;
}

int main()
{

    Node* head = insertValue();

    display(head);

    cout<<"\n"<<getLast(head)<<"\n";

    cout<<getAverage(head)<<"\n";
    //cout<<avg()<<"\n";


    return 0;
}
*/



/*
#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;

};
class linkedList{
public:
    node* head;
    int sz;
    linkedList(){
        head = NULL;
        sz=0;
    }
    node* createNewNode(int value)
    {
        node* newNode=new node;
        newNode->data= value;
        newNode->next=NULL;
        return newNode;
    }
    void InserAtHead(int value)
    {
        sz++;
        node* a= createNewNode(value);
        if(head == NULL)
        {
            head=a;
            return;
        }
        a->next = head;
        head=a;
    }

    int getLast()
    {
        if(head==NULL)
        {
            return -1;
        }
        node* a = head;
        while(a != NULL)
        {
           a=a->next;
          if(a->next==NULL)
          {
              return a->data;
          }
        }
        return -1;
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

    double getAverage()
    {
        if(head==NULL)
        {
            return 0;
        }


        node* a= head;

        int sum = 0;

        while(a != NULL)
        {
            sum += a->data;
            a = a->next;
        }
        double avg = (double)sum/sz;
        return avg;
    }
};


int main()
{
    linkedList l;
    l.InserAtHead(7);
    //l.InserAtHead(5);
    l.InserAtHead(4);
    l.InserAtHead(6);
    l.InserAtHead(2);
    l.InserAtHead(3);
    l.Traverse();

    cout<<l.getLast()<<"\n";
    cout<<l.getAverage()<<"\n";

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
};

class LinkedList
{
public:
    node * head;
    int sz;
    LinkedList()
    {
        head = NULL;
        sz=0;
    }

    //Creates a new node with data = value and nxt= NULL
    node* CreateNewNode(int value)
    {
        node *newnode = new node;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void InsertAtHead(int value)
    {
        sz++;
        node *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Prints the linked list
    void Traverse()
    {
        node* a = head;
        while(a!= NULL)
        {
            cout<<a->data<<" ";
            a = a->nxt;
        }
        cout<<"\n";
    }

    //Search for a single value
    int SearchDistinctValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                return index;
            }
            a = a->nxt;
            index++;
        }
        return -1;
    }

    //Search all possible occurrence
    void SearchAllValue(int value)
    {
        node* a = head;
        int index = 0;
        while(a!= NULL)
        {
            if(a->data==value)
            {
                cout<<value<<" is found at index "<<index<<"\n";
            }
            a = a->nxt;
            index++;
        }
    }

    //Returns number of elements in the linked list
    int getSize()
    {
        //O(1)
        return sz;


        //O(size of linked list) = O(n)
//        int sz = 0;
//        node *a = head;
//        while(a!=NULL)
//        {
//            sz++;
//            a = a->nxt;
//        }
//        return sz;
    }

    //Insert a value at the given index
    void InsertAtAnyIndex(int index, int value)
    {
        if(index <0 || index > sz)
        {
            return;
        }
        if(index==0)
        {
            InsertAtHead(value);
            return;
        }
        sz++;
        node *a = head;
        int cur_index = 0;
        while(cur_index!=index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *newnode = CreateNewNode(value);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

    //Delete the first element of a linked list
    void DeleteAtHead()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node *a = head;
        head = a->nxt;
        delete a;
    }

    //Delete the value at the given index
    void DeleteAnyIndex(int index)
    {
        if(index <0 || index > sz-1)
        {
            return;
        }
        if(index==0)
        {
            DeleteAtHead();
            return;
        }
        sz--;
        node *a = head;
        int cur_index = 0;
        while(cur_index != index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        node *b = a->nxt;
        a->nxt = b->nxt;
        delete b;
    }

    void InsertAfterValue(int value , int data)
    {
        node *a = head;
        while(a != NULL)
        {
            if(a->data == value)
            {
                break;
            }
            a = a->nxt;
        }
        if(a== NULL)
        {
            cout<<value<<" doesn't exist in linked-list.\n";
            return;
        }
        sz++;
        node *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        a->nxt = newnode;
    }

    //Print the Reverse Order from node a to last
    void ReversePrint2(node *a)
    {
        if(a==NULL)
        {
            return;
        }
        ReversePrint2(a->nxt);
        cout<<a->data<<" ";
    }
    void ReversePrint()
    {
        ReversePrint2(head);
        cout<<"\n";
    }

    // Find Last value of linked list.
    int getLast()
    {
        if(head==NULL)
        {
            return -1;
        }
        node* a = head;
        while(a != NULL)
        {
           a=a->nxt;
          if(a->nxt==NULL)
          {
              return a->data;
          }
        }
        return -1;
    }

    //Get average of linked list
    double getAverage()
    {
        if(head==NULL)
        {
            return 0;
        }
        node* a= head;
        int sum = 0;

        while(a != NULL)
        {
            sum += a->data;
            a = a->nxt;
        }
        double avg = (double)sum/sz;
        return avg;
    }

};

int main()
{
    LinkedList l;
    vector<int>pos;
    int x,y,idx=0;
    cin>>y;
    for(int i=y-1; i>=0; i--)
    {
        cin>>x;
        l.InsertAtHead(x);
    }
   reverse(pos.begin(), pos.end());

    l.Traverse();

    cout<<l.getLast()<<"\n";
    cout<<l.getAverage()<<"\n";



//    l.InsertAtHead(7);
//    l.InsertAtHead(4);
//    l.InsertAtHead(6);
//    l.InsertAtHead(2);
//    l.InsertAtHead(3);
//
//    l.ReversePrint();
//
//
//    l.ReversePrint();
//    l.Traverse();
    return 0;
}

//*/
