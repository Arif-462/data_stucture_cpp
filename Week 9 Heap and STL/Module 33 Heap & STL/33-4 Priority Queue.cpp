#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    // tc= O(Log n)
    void up_heapify(int idx)
    {
        while(idx > 0 && nodes[idx] > nodes[(idx-1)/2])
        {
            swap(nodes[idx], nodes[(idx-1)/2]);
            idx = (idx-1)/2;
        }
    }
    //Tc= O(log n)
    void Insertion(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);
    }


    //tc = O(1);
    void Print_Heap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }
    //tc = O(log n)
    void down_heapify(int idx)
    {
        while(1)
        {
            int largest = idx;
            int left = 2*idx+1;
            int right = 2*idx+2;
            if(left < nodes.size() && nodes[largest] < nodes[left])
            {
                largest = left;
            }
            if(right < nodes.size() && nodes[largest] < nodes[right])
            {
                largest = right;
            }
            if(largest == idx)
            {
                break;
            }
            swap(nodes[idx], nodes[largest]);
            idx = largest;
        }
    }
    //tc = O( log n);
    void Delete(int idx)
    {
        if(idx >= nodes.size())
        {
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }

    //tc = O(1);
    int getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return nodes[0];
    }

    //tc = O(1)
    int ExtractMax()
    {
        int red = nodes[0];
        Delete(0);
        return red;
    }

    //tc = O(n);
    void Buil_from_array(vector<int>&a)
    {
        nodes = a;
        int n = nodes.size();
        int last_non_leaf = n/2 - 1 ;
        for(int i = last_non_leaf; i>=0; i--)
        {
            down_heapify(i);
        }
    }

    int GetSize()
    {
        return nodes.size();
    }

};

class priority_Queue{
public:
    MaxHeap h;
    priority_Queue()
    {

    }
    void push(int value)
    {
        h.Insertion(value);
    }

    void pop()
    {
        h.Delete(0);
    }

    int top()
    {
        return h.getMax();
    }

    int Size()
    {
        return h.GetSize();
    }
};

//Tc = O(n log n)
vector<int>heap_sort(vector<int>&a)
{
    MaxHeap h;
    h.Buil_from_array(a);
    vector<int>ans;
    for(int i=0; i<a.size(); i++)
    {
        ans.push_back(h.ExtractMax());
    }
    reverse(ans.begin(),ans.end());
    return ans;
}

int main()
{
    priority_Queue pq;

    pq.push(5);
    pq.push(7);
    pq.push(10);
    pq.push(1);
    pq.push(2);

    cout<<pq.Size()<<"\n";

    while(pq.Size() != 0)
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}


/*
    Priority Queue = jar value joto beshi take priority dey and age print kore.
    it is non linear data structure
    perform:
        Push(x) = Value ta Priority queue te insert kore = Tc O(log n)
        top(x) = Max value ta print kore of pririty q = tc O(1);
        pop(x) = Max value ta k delete kore = tc O(log n)
        size() = Size return kore = tc O(1);
*/
