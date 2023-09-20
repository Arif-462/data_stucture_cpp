#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int >v(n);
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    double a = (double)sum/n;
    printf("%0.12lf\n", a);

    return 0;
}
