#include<bits/stdc++.h>
using namespace std;
void deleteValue(list<int>l, int value)
{
    int count=0;
    for(auto it = l.begin(); it != l.end(); it++)
    {
       //cout<<*it<<" ";
       if(*it==value)
        count++;
    }

    l.remove(value);

    cout<<count<<endl;
}
int main()
{
    list<int>l;
    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);

    deleteValue(l, 4);

    //cout<<l.back();

    //l.pop_front();
    //.sort();
    //cout<<l.front()<<endl;
//    for(auto it = l.begin(); it != l.end(); it++)
//    {
//       cout<<*it<<" ";
//    }
    return 0;
}
