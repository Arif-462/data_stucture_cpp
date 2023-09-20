#include <bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    vector<int> v(n);
    set<int> s;
    for (int i = 0;i < n;i++)
    {
        cin >> v[i];
        if (v[i] == 0)
            s.insert(i + 1);
    }
    int q;
    cin >> q;
   while(q--)
    {
        int l, r;
        cin >> l >> r;
        auto it = s.lower_bound(l);
        if (it != s.end() && *it <= r)
            cout << 0 << '\n';
        else
            cout << 1 << '\n';
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,Q;
    cin >> n;
    vector<int>a(n);
    set<int>s;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i]==0)
            s.insert(i+1);
    }

    cin >> Q;
    while (Q--) {
        int L, R;
        cin >> L >> R;

        auto it = s.lower_bound(1);

        if(it != s.end() && *it <= R)
            cout<< 0 <<"\n";
        else
            cout<< 1 <<"\n";

    }

    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);


    long long int n;
    cin>>n;
    vector<long long >v(n);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    long long int q,a=0,b=0;
    cin>>q;
    long long int L,R;

    while(q--)
    {
        cin>>L>>R;

        for(int i=1; i<=n; i++)
        {
            if(i==L)
            a = v[i];
            if(i==R)
            b = v[i];


        }
        cout<<a*b<<"\n";
    }
    return 0;
}
*/
