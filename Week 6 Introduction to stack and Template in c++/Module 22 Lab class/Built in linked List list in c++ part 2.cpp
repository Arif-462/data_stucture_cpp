#include<bits/stdc++.h>
using namespace std;

// print function for list display
// O(n);
void Print(list<int> l)
{
    //list<int>:: iterator a = l.begin(); // or use auto iterator
    auto a = l.begin();
    while (a!=l.end())
    {
        cout<<*a<<" ";
        a++;
    }
    cout<<"\n";

}

void InsertAtAnyIndex(list<int>&l, int index, int value)
{
    auto it = l.begin();//O(1)
    advance(it, index);//O(index)
    l.insert(it,value);//O(1)
}

void Delete(list<int>&l, int index)
{
    auto it = l.begin();//O(1)
    advance(it, index);//O(index)
    l.erase(it);//O(1)
}
int main()
{
    /*
        Built in linked list function in c++
    */

    list<int>l;

    // push front
    l.push_front(10);
    l.push_front(20);
    l.push_front(30);
    Print(l);

    // push back
    l.push_back(40);
    l.push_back(50);
    Print(l);

    // pop back function delete last or tail element from lisked list
    l.pop_back();
    Print(l);

    //pop front delete the head element from linked list
    l.pop_front();
    Print(l);

    // Insert at any position

    InsertAtAnyIndex(l,1,100);
    Print(l);

    // Delete index and value from linked list
    Delete(l, 1);
    Print(l);

    // size maintain
    cout<<l.size()<<"\n";

    return 0;
}
