
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v;// eivabe use korle arra sobgula 0 thake

    for(int i=0; i<n; i++)
    {
        int input;
        cin>>input;
       v.push_back(input);
    }
//    sort(v.begin(), v.end()); // ascending sorting
//    for(auto val:v)
//    {
//        cout<<val<<" ";
//    }

//    cout<<endl;
//    sort(v.rbegin(), v.rend()); // decending sort // greater end sort google
//    for(auto val:v)
//    {
//        cout<<val<<" ";
//    }

    //sort(v.begin()+1, v.begin()+3); // pertial sort sorting

    int maxx=*max_element(v.begin(), v.end());
    cout<<maxx<<endl;

    int maxi=*max_element(v.begin()+2, v.begin()+5); // pertjial element search

    cout<<maxi<<endl;
    int minn=*min_element(v.begin(), v.end());
    cout<<minn<<endl;



    for(auto val:v)
    {
        cout<<val<<" ";
    }

    reverse(v.begin(), v.end()); // array reverse kore
    for(auto val:v)
    {
        cout<<val<<" ";
    }



    return 0;
}

/*
which things complele this chapter

    push_back()
    size();
    pop_back();
    back()
    front();
    clear();
    empty();
    resize();
    max_element();
    min_element();
    sort();
    reverse();
    swap();

*/
