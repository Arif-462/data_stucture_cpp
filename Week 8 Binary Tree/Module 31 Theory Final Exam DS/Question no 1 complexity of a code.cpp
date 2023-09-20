#include<bits/stdc++.h>
using namespace std;

void fun(int l, int r)
{
    int mid = (l+r) / 2;
    for(int i = l ; i <= r ; i++) //O(n)
    {
        //cout<<i<<" ";
    }
    cout<<endl;
    if(l<r)
    {
        fun(l, mid); //Log n
        fun(mid+1, r);//log n
    }
}

int main()
{
    int n;
    cin>>n;
    fun(0,n-1);

    for(int i = 1 ; i <= n/2 ; i++)// log n
    {
       for(int j = 1 ; j <= n ; j = j + i) //log n
        {
            cout<<"i is "<<i<<" ";

            cout<<j<<" ";
        }
    }


}

