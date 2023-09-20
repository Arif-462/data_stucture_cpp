#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
        STL = Standard Template Library (built in data structure)

        Famous Data structure are as following:

        vector
        stack
        Queue
        Dequeue
        priority queue
        set
        Multi-set
        map

        Set = it is multiple value sorted ordere store
        kore but duplicate value thake na.

    */

    set<int>st;
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);
    st.insert(8);
    st.insert(10);

    for(auto i:st)
    cout<<i<<" ";

    cout<<"\nSize of set is = "<<st.size();

    return 0;
}
