// all the step of buble sort  7 2 13 2 11 4
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int a[]= {7,2,13,2,11,4};
    cout<<"Array = ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl<<endl;
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-1-i; j++)
        {
            if(a[j] > a[j+1])
            {
                swap(a[j], a[j+1]);
            }

            for(int k=0; k<n; k++)
            {
                cout<<a[k]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }

    cout<<"After sorting array : ";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}
