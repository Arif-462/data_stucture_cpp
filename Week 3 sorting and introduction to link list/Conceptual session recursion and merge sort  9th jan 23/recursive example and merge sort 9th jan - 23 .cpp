#include<bits/stdc++.h>
using namespace std;

void fun(int n)
{
    if(n>0)
    {
        cout<<n<<" ";
        fun(n-1);
        fun(n-1);
    }
}
int main()
{
    fun(3);
    return 0;
}

/*
 merge sort dia practice problem solve kore dekhano hoece.
*/
