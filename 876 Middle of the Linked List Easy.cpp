class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!=NULL && fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};



class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        vector<ListNode*> ans={head};
        while(ans.back()->next!=NULL){
            ans.push_back(ans.back()->next);
        }
        return ans[ans.size()/2];
    }
};