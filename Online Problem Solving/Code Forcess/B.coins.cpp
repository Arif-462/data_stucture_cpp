
#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    int ans;
    cout<<n<<" ";
    for(int i=2; i<n;) {
        if(n%i==0) {
            ans=n/i;
            n=ans;
            i=2;
            cout<<ans<<" ";
        } else {
            i++;
        }
    }
    if(n!=1)
        cout<<1<<" ";
    return 0;
}

