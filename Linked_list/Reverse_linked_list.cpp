/*
This is day 6 of solving daily leetcode questions
Problem 14-Reverse Linked list
Problem link -https://leetcode.com/problems/reverse-linked-list/
approach- Three pointer approach
*/
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*  curr=head;
         ListNode* next=NULL;
         ListNode* prev=NULL;
        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
        
    }
};
