#include<bits/stdc++.h>
using namespace std;

class MinHeap{
public:
    vector<int> node;

    MinHeap()
    {

    }

    void up_heapify(int idx)
    {
       while(idx > 0 && node[idx] < node[(idx-1)/2])
       {
           swap(node[(idx-1)/2] , node[idx] );
            idx = (idx-1)/2;
       }
    }

    void down_heapify(int idx)
    {
        while(1)
        {
            int smallest = idx;
            int l = 2*idx+1;
            int r = 2*idx+2;

            if(l < node.size() && node[smallest] > node[l])
                smallest = l;
            if(r < node.size() && node[smallest] > node[r])
                smallest = r;
            if(smallest == idx)
                break;
            swap(node[smallest] , node[idx]);
            idx = smallest;
        }
    }

    void Insert(int x)
    {
        node.push_back(x);
        up_heapify(node.size()-1);
    }

    void Delete(int idx)
    {
        swap(node[node.size()-1], node[idx]);
        node.pop_back();
        down_heapify(idx);
    }

    void print()
    {
        for(int i=0; i<node.size(); i++)
        {
            cout<<node[i]<<" ";
        }
    }

    int getMin()
    {
        if(node.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return node[0];
    }

    //return min and delete min
    int ExtractMin()
    {
        if(node.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        int ans = node[0];
        Delete(0);
        return ans;

    }
};

int main()
{
    MinHeap h;

    h.Insert(3);
    h.Insert(1);
    h.Insert(6);
    h.Insert(5);
    h.Insert(2);
    h.Insert(4);
    h.print();

    cout<<"\nMin of heap "<<h.getMin()<<"\n";

    cout<<endl;
    h.Delete(0);
    h.print();

    cout<<"\nMin of heap "<<h.getMin()<<"\n";

    cout<<h.ExtractMin()<<"\n";
    h.print();

    return 0;
}

