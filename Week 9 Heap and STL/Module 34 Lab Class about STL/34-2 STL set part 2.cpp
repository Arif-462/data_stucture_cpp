#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>st;

    //Tc = O(log n);
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    st.insert(8);
    st.insert(10);

    // Printing set
    //Tc = O(n);
    for(auto i:st)
    cout<<i<<" ";

    //Size of set tc = O(1);
    cout<<"\nSize of set is = "<<st.size()<<"\n";

    //Another print option
    for(auto it=st.begin(); it!=st.end(); it++)
    {
        cout<<*it<<" ";
    }


    //Erase function of set Tc= O(log n)
    st.erase(2);

    cout<<endl;
    // Printing set after erase value
    for(auto i:st)
    cout<<i<<" ";

    // Find option of a set TC = O(log n)
    if(st.find(11) != st.end())
    {
        cout<<"\n11 found\n";
    }

    return 0;
}
/*
    Erase value na thakle value eraze hobe na.
*/
