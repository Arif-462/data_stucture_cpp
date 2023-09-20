/*
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
        cin>> a[i];

    cout << endl;

    // Reverse the vector
    reverse(a.begin(), a.end());

    // Print reverse arry
    for (int i = 0; i < a.size(); i++)
        cout << a[i] <<" ";
    cout << endl;

    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
vector<int>Reverse(vector<int>a)
{
    for(int i=0, j=a.size()-1; i<a.size()/2; i++,j--)
    {
        int temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    return a;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<a.size(); i++)
    {
        cin>>a[i];
    }

    vector<int>ans = Reverse(a);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}
//  */
