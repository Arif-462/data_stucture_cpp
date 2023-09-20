#include<bits/stdc++.h>
using namespace std;

template<class T> // Template declare

class node
{
public:
    T data;
    node * nxt;
    node * prv;
};

template<class T> // Template declare

class DoublyLinkedList
{
public:
    node<T> *head;
    int sz;
    DoublyLinkedList()
    {
        head = NULL;
        sz = 0;
    }

    //Creates a new node with the given data and returns it O(1)
    node<T> *CreateNewNode(T data)
    {
        node<T> *newnode = new node<T>;
        newnode->data = data;
        newnode->nxt = NULL;
        newnode->prv = NULL;
        return newnode;
    }

    //Inserts a node with given data at head O(1)
    void InsertAtHead(T data)
    {
        sz++;
        node<T> *newnode = CreateNewNode(data);
        if(head == NULL)
        {
            head = newnode;
            return;
        }
        node<T> *a = head;
        newnode->nxt = a;
        a->prv = newnode;
        head = newnode;
    }

    //Inserts the given data at the given index O(n)
    void Insert(int index, T data)
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
        node<T> *a = head;
        int cur_index = 0;
        while(cur_index!= index-1)
        {
            a = a->nxt;
            cur_index++;
        }
        // a = cur_index - 1
        node<T> *newnode = CreateNewNode(data);
        newnode->nxt = a->nxt;
        newnode->prv = a;
        node<T> *b = a->nxt;
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
        node<T> *a = head;
        int cur_index = 0;
        while(cur_index != index)
        {
            a = a->nxt;
            cur_index++;
        }
        node<T> *b = a->prv;
        node<T> *c = a->nxt;
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

    // Deletes data at head

    void deleteAtHead()
    {
        if(head==NULL)
        {
            return;
        }
        node<T>* a= head;
        node<T>* b= head->nxt;
        delete a;
        if(b!=NULL)
        {
            b->prv=NULL;
        }
        head = b;
        sz--;

    }

    //Prints the linked list O(n)
    void Traverse()
    {
        node<T> *a = head;
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
    void Reverse()
    {
        if(head==NULL)
        {
            return;
        }
        node<T> *a = head;
        int cur_index = 0;
        while(cur_index != sz-1)
        {
            a = a->nxt;
            cur_index++;
        }

        // last index is in a
        node<T> *b = head;
        while(b!= NULL)
        {
            //swap(b->nxt, b->prv);
            b = b->prv;
        }
        head = a;
    }





    // swap index of doubly linked list
    void swap(int i, int j)
    {
        node<T>* a = head;
        if(i<1 || i>sz || j<1 || j>sz)
        {
            return;
        }

        node<T>* b= head;
        node<T>* c= head;
        for(int k = 0; k<i; k++)
        {
            b = b->nxt;
        }

        for(int k=0; k<j; k++)
        {
            c = c->nxt;
        }

        T d = b->data;
        b->data=c->data;
        c->data=d;
    }


};

// Stack using in doubly linked list
template<class T>
class Stack
{
    public:
    DoublyLinkedList<T> dl;
    Stack()
    {

    }

    //display top/head value from linked list using stack.
    T top()
    {
        if(dl.getSize() == 0)
        {
            cout<<"Stack is empty!"<<" \n";
            T a;
            return a;
        }
        return dl.head->data;
    }

    //push value into linked list using stack;
    void push(T value)
    {
        dl.InsertAtHead(value);
    }

    // from delete value from linked list using stack
    void pop()
    {
        if(dl.getSize()==0)
        {
            cout<<"Stack is empty!"<<"\n";
            return;
        }
        dl.deleteAtHead();
    }
    int getSize()
    {
        return dl.getSize();
    }



};


int main()
{

    Stack<int>a;

    a.push(10);
    a.push(2);
    a.push(3);
    a.push(40);
    a.push(50);

//    cout<<a.top()<<"\n";
//    a.pop();
//    cout<<a.top()<<"\n";
//    a.pop();
//    cout<<a.top()<<"\n";
//    a.pop();
//    cout<<a.top()<<"\n";
//

 // Reverse  a stack using another stack
   Stack<int>tmp;
    while(a.getSize()>0)
    {
        tmp.push(a.top());
        a.pop();
    }
    swap(a,tmp);
    while(a.getSize()>0)
    {
        cout<<a.top()<<"\n";
        a.pop();
    }

    // Sort the stack
//    while(a.getSize()>0)
//    {
//        int t = a.top();
//        a.pop();
//        while(tmp.getSize()>0)
//        {
//            if(tmp.top()<t)
//            {
//                break;
//            }
//            a.push(tmp.top());
//            tmp.pop();
//        }
//        tmp.push(t);
//    }
//    swap(a,tmp);
//    while(a.getSize()>0)
//    {
//        cout<<a.top()<<"\n";
//        a.pop();
//    }

    return 0;
}


