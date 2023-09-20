#include <bits/stdc++.h>
using namespace std;

int main() {
    int y;
    cin >> y;
    if(y==1)
        cout<<1<<"\n";
    else
    {
      long long  a = round(pow(2,y-2)), b = round(pow(2,y-1));
        cout<<a*b<<"\n";
    }

    return 0;
}
