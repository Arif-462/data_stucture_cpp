
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n;

    vector<int> v1(n);
    for(int i=0; i<n; i++)
    {
        cin>>v1[i];
    }
    cin>>m;
    vector<int> v2(m);
    for(int i=0; i<m; i++)
    {
        cin>>v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    vector<int> v;
    set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(),
                          back_inserter(v));


    set<int>st;
    for(int i=0; i<v.size(); i++)
    {
        st.insert(v[i]);
    }

    for(auto it = st.begin(); it !=st.end(); it++)
    {

        cout<<*it<<" ";
    }
}

/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);

    set<int>st;

    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        st.insert(v[i]);
    }

    for(auto it = st.begin(); it !=st.end(); it++)
    {

        cout<<*it<<" ";
    }

    cout<<endl;
    int m;
    cin>>m;
    vector<int>p(m);
    vector<int>b(n);
    for(int i=0; i<m; i++)
    {
        cin>>p[i];
        st.insert(p[i]);

    }


    for(auto it = st.begin(); it !=st.end(); it++)
    {

        cout<<*it<<" ";
    }



    cout<<"\nSize of set is = "<<st.size()<<"\n";


    return 0;
}

*/
