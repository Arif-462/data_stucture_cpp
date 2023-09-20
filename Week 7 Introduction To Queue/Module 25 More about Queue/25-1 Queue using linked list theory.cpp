#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*
        //Queue is using liked list with singly linked list

        Bsically singly linked list maintain two part
            1. head and that point to NULL at the start time
            2. next and that points to next node .

        but, when we insert any value in linked list then add to last index and this takes O(n) times.


        In the Queue we manage O(1) that is constant time.
        for this reason , we use another node for linked list using queue and that is tail pointer.
        Tail point the last node and remember where the last node.
        For using tail enqueue operation is very helpful and easy.

        when we enqueue any value , then we create a node and add to last
        then tail point to last node to new created node. as a result this operation is O(1);

        Dequeue:
        when we dequeue any value from the node just head points to the next node after delete the first value.

        Print :

        For print we use front operation we print just head value and this work O(1);

        Size:

        for size maintain we maintain size -- and ++ for delete and insert value into the node.
    */
    return 0;
}
