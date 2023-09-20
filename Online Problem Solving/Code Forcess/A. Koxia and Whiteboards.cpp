/*
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        list<int> l;
        long long sum = 0;
        for (int i = 0;i < n; i++)
        {
            int in;
            cin >> in;
            l.push_back(in);
            sum += in;
        }

        l.sort();

        for (int i = 0; i<m; i++)
        {
            int n;
            cin >> n;
            sum -= l.front();
            sum += n;
            l.pop_front();
            l.push_front(n);
            l.sort();
        }
        cout << sum << '\n';
    }
    return 0;
}


*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    //ios::sync_with_stdio(false);
    //in.tie(NULL);


    int t;
    cin >> t;
    while (t--)
    {
        long long int n, m;
        cin >> n >> m;
        list<long long int> l;
        long long int sum = 0;
        for (int i = 0;i < n;i++)
        {
            long long int in;
            cin >> in;
            l.push_back(in);
            sum += in;
        }
        l.sort();
        for (int i = 0;i < m;i++)
        {
            long long int n;
            cin >> n;
            sum -= l.front();
            sum += n;
            l.pop_front();
            l.push_front(n);
            l.sort();
        }
        cout << sum << '\n';
    }
    return 0;
}

//*/
/*
>> Problem Link -  https://codeforces.com/contest/1770/problem/A
>> Solution Link - https://codeforces.com/contest/1770/submission/189465062
*/
