#include <bits/stdc++.h>
using namespace std;

void deleteValue(list<int>&l, int value)
{
    for (auto itr = l.begin(); itr != l.end(); itr++)
    {
        if(*itr == value)
        {
            l.erase(itr);
            break;
        }
    }
    cout<<endl;
    //After removing first occurrence of list
    for (auto itr = l.begin(); itr != l.end(); itr++)
    {
        if(itr != l.begin())
            cout<<",";
        cout << *itr ;
    }
}

int main()
{
    list<int> l;

    l.push_back(7);
    l.push_back(3);
    l.push_back(8);
    l.push_back(4);
    l.push_back(5);
    l.push_back(4);

    int value = 4;

    deleteValue(l, value);

    return 0;
}
