
#include<bits/stdc++.h>
using namespace std;
/*
    (n*n)
    n^2==O(n^2);

    time complexity is O(N^2);
    2 ta nested loop

*/
int main()
{
    int n;
    cin>>n; //space O(1);

    for(int i=0; i<n; i++) //O(n)
    {
        for(int j=i; j<n; j++) //O(n);
        {


                cout<<i<<" "<<j<<" \n";

        }
    }
    return 0;
}
/*
  i=0; loop chale n;
  i=1 loop chale n-1;
  i=2  loop chale n-2

  1+2+3------+n
  series sum
  (n(n+1))/2

  n^2/2+n/2
  n^2/2
  n^2
  O(n^2)
*/
