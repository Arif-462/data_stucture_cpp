#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;  //time complexity O(log n)
    cin>>n;
    vector<int>primes; // memory coplexity is O(n)
    vector<bool>visited(n+1);

    for(int i=2; i<=n; i++)
    {
        if(visited[i]==false)
        {
            primes.push_back(i);
            for(int j=2; i*j<=n; j++)
            {
                visited[i*j]=true;
            }
        }
    }
    cout<<primes.size()<<"\n";
    for(int i=0; i<primes.size(); i++)
    {
        cout<<primes[i]<<" ";
    }
    cout<<"\n";
    return 0;

}
