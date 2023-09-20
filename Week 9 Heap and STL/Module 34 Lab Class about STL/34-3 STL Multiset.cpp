#include<bits/stdc++.h>
using namespace std;
int main()
{
    multiset<int> a;

    a.insert(5);
    a.insert(7);
    a.insert(3);
    a.insert(7);
    a.insert(5);
    a.insert(8);
    a.insert(5);
    a.insert(1);

    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\nsize = ";
    cout<<a.size()<<"\n";

    a.erase(5);

    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\nsize = ";
    cout<<a.size()<<"\n";


    //erase a single occurance

    a.erase(a.find(7));

    for(auto it:a)
    {
        cout<<it<<" ";
    }
    cout<<"\nsize = ";
    cout<<a.size()<<"\n";

    if(a.find(7) != a.end())
    {
        cout<<"\nfound 7\n";
    }


    return 0;
}
/*
 Multiset duouble value store kore sorted ordere
*/
