#include<bits/stdc++.h>
using namespace std;

int main()
{

/*
    Time complexity of this code is O(n);
    Space complexity of this code is O(n);
*/
    int n;
    cin>>n;
    vector<int>a(n);//space O(n);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int sum=0;
    for(int i=0; i<n; i++)
    {
        sum = sum + a[i];
    }
    cout<<sum<<endl;


/*


    //Time complexity of this code is O(n^2);
   // Space complexity of this code is O(n^2);

    vector<int>a(n*n);//space O(n^2);
    for(int i=0; i<n*n; i++)
    {
        cin>>a[i];
    }

    int sum=0;
    for(int i=0; i<n*n; i++)
    {
        sum = sum + a[i];
    }
    cout<<sum<<endl;

    */
    return 0;
}

