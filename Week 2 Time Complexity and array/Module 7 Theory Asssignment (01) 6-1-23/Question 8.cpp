#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n=1000000;
    long long int d=pow(n,3);
    long long int k=1000000000;
    long long int l=d/k;
    long long int m= 365*24*60*60;

    long long int year=l/m;
    cout<<"The n = "<<n<<endl;
    cout<<"Total operation n^3 = (1000000)^3 = "<<d<<"\n";
    cout<<"Alice's computer can total operation in a second = "<<k<<"\n";
    cout<<"Total seconds need for all operation = "<<l<<"\n";
    cout<<"Total second in a year = "<<m<<"\n";
    cout<<"Total years need to finish the program = "<<year<<"\n";
    return 0;
}
