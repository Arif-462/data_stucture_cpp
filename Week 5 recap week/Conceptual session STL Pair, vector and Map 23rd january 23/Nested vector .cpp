#include<bits/stdc++.h>
using namespace std;

int main()
{
//    int n;
//    cin>>n;
    vector<vector<int>>v(10);
    v[0].push_back(10);
    v[0].push_back(20);
    v[0].push_back(30);


    v[1].push_back(40);
    v[1].push_back(50);
    v[2].push_back(5);
    v[2].push_back(6);

    cout<<v[2].size()<<"\n";
    cout<<v[2][1]<<"\n";

    // jante hobe
    for(int i=0; i<v.size(); i++)
    {
        for(int j=0; j<v.size(); j++)
        {
            //cout<<v[i][j]<<" ";
        }

    }


    return 0;
}


