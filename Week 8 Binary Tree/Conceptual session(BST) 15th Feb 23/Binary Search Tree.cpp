#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int value;
    Node* left;
    Node* right;

    Node(int value)
    {
        this->value = value;
        left = NULL;
        right = NULL;
    }


};

class BST
{
public:
    Node* root;

    BST()
    {
        root = NULL;
    }

    void Insert_BST(int value)
    {
        Node* newnode = new Node(value);
        if(root == NULL)
        {
            root = newnode;
            return;
        }

        Node* Current = root;
        Node* prv = NULL;

        while(Current != NULL)
        {
            prv  = Current;
            if(value > Current->value)
            {
                Current = Current->right;
            }
            else
            {
                Current = Current->left;
            }

        }
        if(value > prv->value)
        {
            prv->right = newnode;
        }
        else
        {
            prv->left = newnode;
        }

    }

    void Display_Tree()
    {
        if( root == NULL)
        {
            cout<<"Tree is empty\n";
            return;
        }

        queue<Node*>q;
        q.push(root);

        while(q.empty() == false)
        {
            Node* rootNode = q.front();

            cout<<rootNode->value<<" ";

            if(rootNode->left != NULL)
            {
                q.push(rootNode->left);
            }
            if(rootNode->right != NULL)
            {
                q.push(rootNode->right);
            }
            q.pop();
        }
    }

    bool Find_value(int value)
    {
        if(root == NULL)
        {
            return false;
        }
        Node* tmp = root;
        while(tmp != NULL)
        {
            if(value > tmp->value)
            {
                tmp = tmp->right;
            }
            else if(value < tmp->value)
            {
                tmp = tmp->left;
            }
            else
            {
                return true;
            }
        }
        return false;
    }

    void Delete(int value)
    {
        if(root == NULL)
        {
            cout<<"tree is not exist\n";
            return;
        }

        Node* curren = root;
        Node* prv = NULL;
        while(curren != NULL)
        {

            if(value > curren->value)
            {
                prv = curren;
                curren = curren->right;
            }
            else if(value < curren->value)
            {
                prv = curren;
                curren = curren->left;
            }
            else
            {
                break;
            }
        }
        if(curren->left == NULL && curren->right == NULL)
        {
            //Node* delNode = curren;
            if(prv->right != NULL && value > prv->value)
            {
                prv->right = NULL;
            }
            else
            {
                prv->left = NULL;
            }
            delete curren;
            return;
        }
    }
};

int main()
{
    BST a;
    a.Insert_BST(8);
    a.Insert_BST(11);
    a.Insert_BST(6);
    a.Insert_BST(4);
    a.Insert_BST(7);
    a.Insert_BST(9);
    a.Insert_BST(13);

    a.Display_Tree();


    if(a.Find_value(11) == true)
    {
        cout<<"Exist\n";
    }
    else
    {
        cout<<"Not found\n";
    }

    a.Delete(9);
    a.Display_Tree();
    return 0;
}

/*
  Leaf Node : Last node is called the leaf node or which nodes has no child is called leaf nodes.

  Perfect binary tree : which binary tree filled with the leaf nodes is called perfect binary search tree

  Level : From up to bottom each and every steps is called level.

  Level wise leaf nodes Formula : 2^n - 1 (where n is level Number)
    =2^3-1 = 8-1 = 7 (Here n= 3) here 7 leaf nodes present in this binary search tree.

*/
