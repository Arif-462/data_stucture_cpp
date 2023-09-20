#include<bits/stdc++.h>
using namespace std;
int main()
{
    //big O notation dia time complexity lekha hoy.
    // basically ekta loop n+1 time chole .
    // 1 bar besi cholbe karon last bar na challe to braek hobe na.

    int n;
    cin>>n;// time complexity = O(n)

      // 1No problem
//    for(int i=1; i<=n; i++)//space complexity is = O(1);
//    {
//        cout<<"Phitron\n";
//    }

    // 2no problem:
    vector<int>v;          //space= O(n)
    for(int i=1; i<n; i++) //time = O(n);
    {
        v.push_back(i);
    }


    // 3 no problem // log value calculate kore dkhay j pray same
    for(int i= n; i>=1; i/=2)// tc = O(log n)
    {
        cout<<"Phitron\n";
    }


    // 4 No problem
    vector<int>v; //sc = O(log n)
    for(int i= n; i>=1; i/=2)// tc = O(log n)
    {
        v.push_back(i);
    }


    // 5 no problem sc=O(1);
    // O(n)*O(n)= Tc O(n^2)
    for(int i= 1; i<=n; i++)// tc = O(n)
    {
        for(int j=1; j<=n; j++)//tc = O(n)
        {
            cout<<"Phitron\n"
        }
    }

    //6 no probelm
    // O(n)*O(log n)= TC = O(n log n)
    for(int i= 1; i<=n; i++)// tc = O(n)
    {
        for(int j=n; j>=1; j/=2)//tc = O(log n)
        {
            cout<<"Phitron\n"
        }
    }


    //7 no problem
    vector<int>v;   //sc=O(n log n) // tc=O(n log n)
    for(int i= 1; i<=n; i++)// tc = O(n)
    {
        for(int j=n; j>=1; j/=2)//tc = O(log n)
        {
            v.push_back(j);
        }
    }

    // 8 no problem
    // Tc= O(N log N);
    // Sc= O(1)
    for(int i= 1; i<=n; i++)// tc = O(n)
    {
        for(int j=1; j<=n; j+=i)//tc = O(log n)
        {
            cout<<"Phitron\n";
        }
    }

    // 9 no problem
    // sc=O(1)
    // Tc=O(log n);
    int k=1, n=16;
    while(k<=n)
    {
        cout<<k<<endl;
        k=k*2;
    }

    //10 problem
    // sc=O(1)
    // Tc=O(log n)
    for(int i=n/2; i<=n; i++)//O(n)
    {
        for(int j = 1; j<=n; j*2)//O(log n)
        {
            cout<<i<<" "<<j<<endl;
        }
    }

    // 11 no problem
    // Tc = O(n*n)=O(n^2);
    // Sc = O(n^2)// j hetu loop n^2 bar chalse;
    vector<int>d[n+1];
    for(int i=1; i<=n; i++)//O(n)
    {
        for(int j = 1; j<=n; j++)//O(n)
        {
            v.push_back(i);
        }
    }

    return 0;
}
