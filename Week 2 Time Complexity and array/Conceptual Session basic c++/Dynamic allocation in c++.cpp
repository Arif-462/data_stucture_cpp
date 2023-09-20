#include<bits/stdc++.h>
using namespace std;

int main()
{
    int *ptr = new int[10]{1,2,3,4,5}; // initialize na korle garbase value dibe
    //new int ; // heap e akta int arra create kore thar address dibe
    for(int i=0; i<10; i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete ptr; // programer sese obossoi delete function use korte hobe
    return 0;
}



/*
int main()
{
    int *p =(int*)malloc(10*sizeof(int)); //c te mallocf() e gabase value thake
    int *q =(int*)calloc(10,sizeof(int)); //c te calloc() e garbase value thake na.
    for(int i=0; i<10; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl;
    for(int i=0; i<10; i++)
    {
        cout<<q[i]<<" ";
    }
    free(p);
    free(q);
    return 0;
}
*/
