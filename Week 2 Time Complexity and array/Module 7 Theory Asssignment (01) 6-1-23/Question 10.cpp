#include<bits/stdc++.h>
using namespace std;
void func()
{
    int* p = new int;


    delete p;
    return;
}

int main()
{
    func();
    return 0;
}

