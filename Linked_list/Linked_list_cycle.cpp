/*
This is day 6 of solving daily leetcode questions.
Problem 13: Linked list cycle
Problem link -https://leetcode.com/problems/linked-list-cycle/

Approach - Two pointer approach 
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(fast && fast->next){
            if(fast==slow)return 1;
            slow=slow->next;
            fast=fast->next->next;
        }
        return 0;
        
    }
};
