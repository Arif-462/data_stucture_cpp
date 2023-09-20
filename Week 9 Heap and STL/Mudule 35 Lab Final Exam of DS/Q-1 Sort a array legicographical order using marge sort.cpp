#include <bits/stdc++.h>
using namespace std;

vector<string>merge_sort(vector<string>a)
{
    //basecase
    if(a.size()<=1)
    {
        return a;
    }
    int mid = a.size()/2;
    vector<string>left, right;

    for(int i=0; i<mid; i++)
    {
        left.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        right.push_back(a[i]);
    }

    vector<string>sorted_left = merge_sort(left);
    vector<string>sorted_right = merge_sort(right);

    vector<string>main;
    int id_l = 0;
    int id_r = 0;
    for(int i=0; i<a.size(); i++)
    {
        //corner case
        if(id_l==sorted_left.size())
        {
            main.push_back(sorted_right[id_r]);
            id_r++;
        }
        else if(id_r==sorted_right.size())
        {
            main.push_back(sorted_left[id_l]);
            id_l++;
        }

        //Sorted condition consider index
        else if(sorted_left[id_l]<sorted_right[id_r])
        {
            main.push_back(sorted_left[id_l]);
            id_l++;
        }
        else
        {
            main.push_back(sorted_right[id_r]);
            id_r++;
        }
    }
    return main;

}
int main()
{
    int n;
    cin>>n;
    vector<string>s(n);
    for(int i = 0; i<s.size(); i++)
    {
        cin>>s[i];
    }

    vector<string>ans = merge_sort(s);
    for(int i = 0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;

    return 0;
}

