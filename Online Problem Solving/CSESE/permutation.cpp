#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int>ans;
    if (n <= 3 && n>1)
    {
        cout<<"NO SOLUTION"<<"\n";
    }
    else
    {
        if (n % 2 == 0)
        {
            for (int i = 2; i <= n; i += 2)
            {
                ans.push_back(i);
            }
            for (int i = 1; i < n; i += 2)
            {
                ans.push_back(i);
            }
        }
        else
        {
            for (int i = 2; i <= n - 1; i += 2)
            {
                ans.push_back(i);
            }
            for (int j = 1; j <= n; j += 2)
            {
                ans.push_back(j);
            }
        }
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    vector<int>ans;
    if (n <= 3 && n>1)
    {
        cout<<"NO SOLUTION"<<"\n";
    }
    else
    {
        if (n % 2 == 0)
        {
            for (int i = 2; i <= n; i += 2)
            {
                ans.push_back(i);
            }
            for (int i = 1; i < n; i += 2)
            {
                ans.push_back(i);
            }
        }
        else
        {
            for (int i = 2; i <= n - 1; i += 2)
            {
                ans.push_back(i);
            }
            for (int j = 1; j <= n; j += 2)
            {
                ans.push_back(j);
            }
        }
        for (int x : ans)
            cout << x << " ";
    }

    return 0;
}
*/

