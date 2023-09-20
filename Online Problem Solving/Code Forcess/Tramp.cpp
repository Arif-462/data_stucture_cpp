#include<bits/stdc++.h>
using namespace std;
int ans(int a, int b) {
    if(a>b)
        return a-b;
    else
        return b-a;


}
int main() {
    int t,b;
    cin>>t;
    while(t--) {
        int n, m;
        cin>>n>>m;

        int a=0;
         a += ans(n, m);
        b = max(a, ans(n,m));


        cout<<b<<"\n";
    }

    //cout<<b<<"\n";
    return 0;
}
