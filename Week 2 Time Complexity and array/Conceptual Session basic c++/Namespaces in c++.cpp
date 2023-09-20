#include<bits/stdc++.h>
using namespace std;

namespace one
{
    int x=20;
    void fun()
    {
        cout<<"I am namespaces one"<<endl;
    }
}

namespace two
{
    int x=10;
    void fun1()
    {
        cout<<"I am namespaces two"<<endl;
    }
}

using namespace one;
using namespace two;
int main()
{
    fun();
    cout<<one::x<<endl;
    cout<<two::x<<endl;

    return 0;
}

