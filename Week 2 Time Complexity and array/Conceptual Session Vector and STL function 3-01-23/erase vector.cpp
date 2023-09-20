
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);// eivabe use korle arra sobgula 0 thake

    cout<<v.size()<<endl; // vector size print kore;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }

//    v.clear(); //
//    int emp=v.empty(); // empty kina check kore.
//    cout<<emp<<endl; // empty hoile 1 dekhay
//    cout<<v.size()<<endl;
////    while(!v.empty())
//    {
//        cout<<v.back()<<endl;
//        v.pop_back();
//    }


//    for(int i=0; i<v.size(); i++)
//    {
//        cout<<v[i]<<" ";
//    }

    v.resize(7, 9 );// age joto gula value nieci segula bade baki 0 thakbe
    /* (7,9) 7 size and 9 value hisebe thake*/
    for(int i=0; i<v.size(); i++)
    {
        //cin>>v[i];
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }


    return 0;
}
