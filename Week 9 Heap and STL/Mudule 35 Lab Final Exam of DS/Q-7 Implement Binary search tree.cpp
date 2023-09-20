#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int value;
    node* Left;
    node* Right;
};

class BST{
public:
    node* root;

    BST()
    {
       root = NULL;
    }

    node* CreateNewnode(int value)
    {
        node* newnode = new node;
        newnode->value = value;
        newnode->Left = NULL;
        newnode->Right = NULL;
        return newnode;
    }

    void Insert(int value)
    {
        node* newnode = CreateNewnode(value);
        if(root == NULL)
        {
            root = newnode;
            return;
        }

        node* cur = root;
        node* prv = NULL;

        while(cur != NULL)
        {
            if(newnode->value < cur->value)
            {
                prv = cur;
                cur = cur->Left;
            }
            else
            {
                prv = cur;
                cur = cur->Right;
            }
        }

        if(newnode->value < prv->value)
        {
            prv->Left = newnode;
        }

        else
        {
            prv->Right = newnode;
        }

    }


    bool Search(int value)
    {
        node* cur = root;
        while(cur != NULL)
        {
            if(cur->value > value)
            {
                cur = cur->Left;
            }
            else if(cur->value < value)
            {
                cur = cur->Right;
            }
            else
            {
                return true;
            }
        }
        return false;
    }
};


int main()
{
    BST bst;

    bst.Insert(10);
    bst.Insert(20);
    bst.Insert(25);
    bst.Insert(50);
    bst.Insert(8);
    bst.Insert(9);

    cout<<bst.Search(10)<<"\n"; //1
    cout<<bst.Search(9)<<"\n"; //1
    cout<<bst.Search(20)<<"\n"; //1
    cout<<bst.Search(60)<<"\n"; //0
    return 0;

}
