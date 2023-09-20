#include<bits/stdc++.h>
using namespace std;

int a[10];
int main()
{
    //binary digit count
    cout<<"Binary conversion = "<<bitset<4>(5)<<"\n";

    // array globaly declare value vreate 0, main function declare value garbage
    for(int i=0; i<10; i++)
    cout<<a[i]<<" ";
    return 0;
}
