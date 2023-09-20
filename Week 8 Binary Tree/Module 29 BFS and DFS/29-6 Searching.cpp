#include<bits/stdc++.h>
using namespace std;

class node
{
public:
    int id;
    int value;
    node* left;
    node* right;
    node* parent;
};

class BinaryTree
{
public:
    node* root;
    node* allnode[6];

    BinaryTree()
    {
        root = NULL;
    }

    node* CreateNewnode(int id, int value)
    {
        node* newnode = new node;
        newnode->id = id;
        newnode->value = value;
        newnode->left = NULL;
        newnode->right = NULL;
        newnode->parent = NULL;
        return newnode;
    }

    void Insersion(int id, int value)
    {
        node* newnode = CreateNewnode(id, value);

        if(root==NULL)
        {
          root = newnode;
          return;
        }
        queue<node*>q;
        q.push(root);
        while(!q.empty())
        {
            node* a = q.front();
            q.pop();

            if(a->left != NULL)
            {
                q.push(a->left);
            }
            else
            {
                a->left = newnode;
                newnode->parent = a;
                return;
            }
            if(a->right != NULL)
            {
               q.push(a->right);
            }
            else
            {
                a->right = newnode;
                newnode->parent = a;
                return;
            }
        }
    }

    void Search(node* a, int value)
    {
        if(a == NULL)
        {
            return;
        }
        if(a->value == value)
        {
            cout<<a->id<<" ";
        }
        Search(a->left, value);
        Search(a->right, value);

    }

    void BFS()
    {
        queue<node*>q;
        q.push(root);

        while(!q.empty())
        {
            node* a = q.front();
            q.pop();
            int p =-1, l =-1, r=-1;

            if(a->left != NULL)
            {
                l = a->left->id;
                q.push(a->left);
            }
            if(a->right != NULL)
            {
                r = a->right->id;
                q.push(a->right);
            }
            // parentk push korbo na
            if(a->parent != NULL)
            {
                p = a->parent->id;

            }

            cout<<"Node id = "<<a->id<<" left child = "<<l;
            cout<<" right child = "<<r<<" Parent id = "<<p<<"\n";
        }
    }

    void DFS(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        DFS(a->left);
        DFS(a->right);
    }

    void Inorder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        Inorder(a->left);
        cout<<a->id<<" ";
        Inorder(a->right);
    }

    void Preorder(node* a)
    {
        if(a == NULL)
        {
            return;
        }
        cout<<a->id<<" ";
        Preorder(a->left);
        Preorder(a->right);

    }

    void Postorder(node* a)
    {
        if(a==NULL)
        {
            return;
        }

        Preorder(a->left);
        Preorder(a->right);
        cout<<a->id<<" ";
    }

};

int main()
{
    BinaryTree bt;

    bt.Insersion(0,5);
    bt.Insersion(1,10);
    bt.Insersion(2,10);
    bt.Insersion(3,9);
    bt.Insersion(4,8);
    bt.Insersion(5,5);
    bt.Insersion(6,7);

    bt.BFS();
    cout<<endl;
    bt.Search(bt.root, 10);
    bt.Search(bt.root, 5);

    //bt.DFS(bt.root);

    //bt.Inorder(bt.root);

   //bt.Preorder(bt.root);

   //bt.Postorder(bt.root);

    return 0;
}


