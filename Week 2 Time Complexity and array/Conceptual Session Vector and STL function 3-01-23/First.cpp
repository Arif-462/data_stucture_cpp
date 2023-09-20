#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);// eivabe use korle arra sobgula 0 thake
//    for(int i=1; i<=n; i++)
//    {
//        int input;
//        cin>>input;
//        v.push_back(input);
//    }

//    for(int i=0; i<n; i++)
//    {
//
//        cin>>v[i];
//    }

    for(int i=0; i<v.size(); i++)
    {

        cin>>v[i];
    }

    int lastElement=v.back(); // delete item store;
    cout<<lastElement<<endl;

    int firstElement=v.front();// first element store kore
    cout<<firstElement<<endl;

    v.pop_back(); //delete kore ses theke
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }

    cout<<endl;
     for(int i=0; i<n; i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
