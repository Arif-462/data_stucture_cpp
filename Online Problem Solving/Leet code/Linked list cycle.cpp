/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class node{
 public:
     int data;
     node* head;
 };


class Solution {
public:
    bool hasCycle(ListNode *head) {
       ListNode* slow = head;
       ListNode* fast = head;

       while(slow !=NULL and fast->next!=NULL)
       {
           slow= slow->next;
           fast=fast->next->next;
           if(slow==NULL || fast==NULL)return false;

            if(slow==fast) return true;


       }
       return false;
    }

};

int main()
{
    Solution sl;
    sl.hasCycle(10);

    return 0;
}
