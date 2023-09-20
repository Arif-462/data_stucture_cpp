#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> st;

    // push function insert value into stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);


    cout<<"size of stack - "<<st.size()<<"\n";
    // top print the value of a stack
    cout<<st.top()<<endl;

    // pop function delete the value a stack

    st.pop();
    cout<<st.top()<<"\n";

    //size function print size return kore
    cout<<"after delete size - "<<st.size()<<"\n";


    return 0;
}
