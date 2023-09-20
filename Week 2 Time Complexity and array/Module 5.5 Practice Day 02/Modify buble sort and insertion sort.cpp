
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++) // buble sort modifying
//    {
//        for(int j=i+1; j<n-1; j++)
//        {
//            if(a[i]<a[j])
//            {
//                swap(a[i], a[j]);
//            }
//        }
//        cout<<"iteration:"<<i<<" ";
//
//        for(int i=0; i<n; i++)
//        {
//            cout<<a[i]<<" ";
//        }
//
//        cout<<endl;
//
//    }

    for(int i=1; i<n; i++) // insertion sort modifying
    {
        int idx=i;
        while(idx>=1)
        {
           if(a[idx-1]<a[idx])
            {
                swap(a[idx-1], a[idx]);
            }
            idx--;

        }
    }


    cout<<"\nAfter sorting:\n";
    for(int i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    return 0;
}
