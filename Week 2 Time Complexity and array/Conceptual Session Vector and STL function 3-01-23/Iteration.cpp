
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);// eivabe use korle arra sobgula 0 thake


    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
       v.push_back(input);
    }


    //vector<int> :: iterator it; // traverse kora jay location pont kore

//    auto it = v.begin();
//
//    for(it=v.begin(); it!=v.end(); it++)
//    {
//        cout<<*it<<" ";
//    }

    for(int val:v)// for each loop
    {
        cout<<val<<" ";
        //cout<<val<<" ";
    }



    return 0;
}

