#include<bits/stdc++.h>
using namespace std;

int main()
{
    //int arr[5]={2,3,4,5,8};  // initializing array
    int arr[5];
    for(int i=0; i<5; i++)
    {
        cin>>arr[i];  // array input from user
    }
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }

    //cout<<endl;

    char ar[50];
    //cin>>ar;
    cin.getline(ar,50);
    cout<<ar<<endl;
    return 0;
}

/*
    c++ take input with space by cin.getline(char arry name, array size);
*/
