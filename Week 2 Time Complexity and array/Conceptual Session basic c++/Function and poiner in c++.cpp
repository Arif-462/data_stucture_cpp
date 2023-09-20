#include<bits/stdc++.h>
using namespace std;


void print(int **x)
{
    //cout<<x<<endl;
    **x=2500;

}
int main()
{
    int a=10;
    int *ptr=&a;
    int **q=&ptr;
    print(q);
    cout<<a<<endl;

    return 0;
}
