#include<bits/stdc++.h>
using namespace std;

int fibo()
{
    int sum=0;
    for(int i=1; i<=5; i++)
    {
      sum=sum+i;
    }
    return sum;
}


int main()
{
    int a=fibo();
    cout<<a<<"\n";
    return 0;
}
