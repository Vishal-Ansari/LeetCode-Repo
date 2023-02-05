class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;

        if(!head || !head->next) return NULL;

        while( fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast) break;
        }
        if(!fast || !fast->next) return NULL;
        while(head!=slow){
            head=head->next;
            slow=slow->next;
        }
        return head;

    }
};
