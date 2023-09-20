#include<bits/stdc++.h>
using namespace std;
template<class T>
class MaxHeap
{
public:
    vector<T>nodes;

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
    void Insertion(T x)
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
    //tc = O(log n);
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
    T getMax()
    {
        if(nodes.empty())
        {
            cout<<"Heap is empty\n";
            return -1;
        }
        return nodes[0];
    }
    //tc = O(1)
    T ExtractMax()
    {
        T red = nodes[0];
        Delete(0);
        return red;
    }

};
int main()
{
    MaxHeap<int> h;

    h.Insertion(5);
    h.Insertion(1);
    h.Insertion(6);
    h.Insertion(10);
    h.Insertion(54);
    h.Insertion(4);
    h.Insertion(8);
    h.Insertion(2);

    h.Print_Heap();
    cout<<h.getMax()<<"\n";
    cout<<h.ExtractMax()<<"\n";
    h.Print_Heap();

//    h.Delete(0);
//    h.Delete(5);

    h.Print_Heap();
    cout<<h.getMax()<<"\n";
    cout<<h.ExtractMax()<<"\n";
    h.Print_Heap();


     MaxHeap<char> c;

    c.Insertion('a');
    c.Insertion('b');
    c.Insertion('c');
    c.Insertion('d');
    c.Insertion('e');
    c.Insertion('f');
    c.Insertion('g');
    c.Insertion('h');

    c.Print_Heap();
    cout<<c.getMax()<<"\n";
    cout<<c.ExtractMax()<<"\n";
    c.Print_Heap();

//    h.Delete(0);
//    h.Delete(5);

    h.Print_Heap();
    cout<<h.getMax()<<"\n";
    cout<<h.ExtractMax()<<"\n";
    h.Print_Heap();


    return 0;
}
