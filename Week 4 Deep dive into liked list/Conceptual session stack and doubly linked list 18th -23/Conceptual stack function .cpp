#include<bits/stdc++.h>
using namespace std;
/*
  stack
*/
int main()
{
    stack<int>numst;
    numst.push(10);
    numst.push(20);
    numst.push(30);
    numst.push(40);

//    if(numst.empty()==false)
//    {
//        numst.pop();
//    }
//    if(numst.empty()==false)
//    {
//        numst.pop();
//    }
//    if(numst.empty()==false)
//    {
//        numst.pop();
//    }
//    if(numst.empty()==false)
//    {
//        numst.pop();
//    }

//    if(numst.empty()== false)
//    {
//        cout<<numst.top()<<"\n";
//    }

//    numst.pop();
//    numst.pop();
//    numst.pop();
//    numst.pop();

while(numst.empty()==false)
{
    cout<<numst.top()<<" ";
    numst.pop();
}

    //cout<<numst.top()<<endl;
    //cout<<numst.empty()<<endl;
    return 0;
}
