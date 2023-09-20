#include<bits/stdc++.h>
using namespace std;
int main()
{

    map<string, int> a;
    a["goru"] = 1;
    a["chagol"] = 2;
    a["vera"] = 3;

   cout<<a["goru"]<<"\n";
   cout<<a["vera"]<<"\n";
   cout<<a["chagol"]<<"\n";


    a["cat"]=1;

    cout<<a["cat"]<<"\n";

    for(auto it:a)
    {
        cout<<"key : "<<it.first<<" , value : "<<it.second<<"\n";
    }


    //print map 2; tC = (log n)
    cout<<endl;
    map<int , int> nt;
    nt[62] = 1;
    nt[2]  = 0;
    nt[1000]=5;

   // tc = O(n);
    for(auto it:nt)
    {
        cout<<"key : "<<it.first<<" , value : "<<it.second<<"\n";
    }

    cout<<nt.size()<<"\n";
    return 0;
}

