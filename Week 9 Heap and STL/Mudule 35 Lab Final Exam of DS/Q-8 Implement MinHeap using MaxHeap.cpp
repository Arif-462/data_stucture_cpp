#include<bits/stdc++.h>
using namespace std;

class MaxHeap
{
public:
    vector<int>nodes;

    MaxHeap()
    {

    }

    void up_heapify(int idx1)
    {
        while(idx1 > 0 && nodes[idx1] > nodes[(idx1-1)/2])
        {
            swap(nodes[idx1], nodes[(idx1-1)/2]);
            idx1 = (idx1-1)/2;
        }
    }

    void InsertValue(int x)
    {
        nodes.push_back(x);
        up_heapify(nodes.size()-1);

    }

    void PrintHeap()
    {
        for(int i=0; i<nodes.size(); i++)
        {
            cout<<nodes[i]<<" ";
        }
        cout<<endl;
    }

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

    void DeleteIndexValue(int idx)
    {
        if(idx >= nodes.size())
        {
            return;
        }
        swap(nodes[idx], nodes[nodes.size()-1]);
        nodes.pop_back();
        down_heapify(idx);
    }


    int getMax()
    {
        if(nodes.empty()==true)
        {
            cout<<"MaxHeap is empty\n";
            return -100;
        }
        return nodes[0];
    }

    int ExtractMax()
    {
        int red = nodes[0];
        DeleteIndexValue(0);
        return red;
    }

};

class MinHeap{
public:
    MaxHeap mx;

    MinHeap()
    {

    }
    void Insert(int x)
    {
        mx.InsertValue(x*(-1));
    }

    void Delete(int idx)
    {
        mx.DeleteIndexValue(idx);
    }

    int getMin()
    {
        return (mx.getMax() *(-1));
    }

};

int main()
{
    // MaxHeap Function****

    MaxHeap mx;

    mx.InsertValue(3);
    mx.InsertValue(1);
    mx.InsertValue(6);
    mx.InsertValue(5);
    mx.InsertValue(2);
    mx.InsertValue(8);
    mx.PrintHeap();
    cout<<"Max value of MaxHap = "<<mx.getMax()<<"\n";

    mx.DeleteIndexValue(0);
    cout<<"After delete index value :\n";
    mx.PrintHeap();
    cout<<"Max value of MaxHap = "<<mx.getMax()<<"\n";



    //MinHeap Function *****
    cout<<"\n\n";
    MinHeap mn;

    mn.Insert(3);
    mn.Insert(1);
    mn.Insert(6);
    mn.Insert(5);
    mn.Insert(2);
    mn.Insert(8);

    cout<<"Min value of MinHeap = "<<mn.getMin()<<"\n";

    mn.Delete(0);cout<<"After delete index value : \n";

    cout<<"Min value of MinHeap = "<<mn.getMin()<<"\n";

    return 0;
}
