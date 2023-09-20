#include<bits/stdc++.h>
using namespace std;
vector<int>merge_sort(vector<int>a)
{
    //basecase
    if(a.size()<=1)
    {
        return a;
    }
    int mid = a.size()/2;
    vector<int>left, right;
    for(int i=0; i<mid; i++)
    {
        left.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        right.push_back(a[i]);
    }

    vector<int>sorted_left = merge_sort(left);
    vector<int>sorted_right = merge_sort(right);

    vector<int>main;
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

        //sorted condition cosider index
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
    cout<<"Enter vector size : ";
    cin>>n;
    vector<int>a(n);
    cout<<"Enter vector elements \n";
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>ans=merge_sort(a);
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;

vector<int>marge_sort(vector<int>a)
{
    //base case start.
    if(a.size()<=1)
    {
        return a;
    }
    // base case end.

    //devide and declare mid value
    int mid = a.size()/2;

    vector<int>b;
    vector<int>c;
    //push value into b and c left and right vector
    for(int i=0; i<mid; i++)
    {
        b.push_back(a[i]);
    }
    for(int i=mid; i<a.size(); i++)
    {
        c.push_back(a[i]);
    }
    vector<int>sorted_b = marge_sort(b);
    vector<int>sorted_c = marge_sort(c);

    vector<int>sorted_a;
    int index1 = 0;
    int index2 = 0;
    for(int i=0; i<a.size(); i++)
    {
        if(index1 == sorted_b.size())
        {
           sorted_a.push_back(sorted_c[index2]);
           index2++;
        }
        else if(index2 == sorted_c.size())
        {
           sorted_a.push_back(sorted_b[index1]);
           index1++;
        }
        else if(sorted_b[index1] < sorted_c[index2])
        {
            sorted_a.push_back(sorted_b[index1]);
            index1++;
        }
        else
        {
            sorted_a.push_back(sorted_c[index2]);
            index2++;
        }
    }
    return sorted_a;
}

int main()
{
    vector<int>a = {5,3,2,9,1,6};

    vector<int>ans = marge_sort(a);

    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }

    return 0;
}
*/
