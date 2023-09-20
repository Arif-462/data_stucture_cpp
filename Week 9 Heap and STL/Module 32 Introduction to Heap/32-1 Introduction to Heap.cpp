/*
heap

1. insert (x) == Value insert korte pare in log n time_base
2. Max/Min == heap max and min ber korte pare in O(1) time.
3. Delete == Value delete korte pare in log n time

Binary tree 2 prokar
1. BST = kaj kore O(h);
2. Heap == kaj kore O(log n)
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq;
    dq.push_back(1);
    dq.push_front(1);
    dq.push_back(2);
    dq.push_front(9);
    dq.push_back(4);
    while (!dq.empty())
    {
        cout << dq.front() << " ";
        dq.pop_front();
    }
    return 0;
}
