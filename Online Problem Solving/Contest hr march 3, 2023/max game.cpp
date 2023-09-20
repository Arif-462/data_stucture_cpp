#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;

    priority_queue<int>pq;

    while (q--) {
        int op;
        cin >> op;

        if (op == 1) {
            int v;
            cin >> v;
            pq.push(v);
        }
        else
        {
            cout<<pq.top()<<"\n";
            pq.pop();
        }

    }

    return 0;
}
