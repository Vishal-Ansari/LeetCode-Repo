class Solution {
public:
    TreeNode* sortedListToBST(ListNode* head) {

        if(head==NULL){
            return NULL;
        }
        if(head->next==NULL){
            TreeNode* root= new TreeNode(head->val);
            return root;
        }
        
        ListNode* slow=head;
        ListNode* fast=head->next->next;
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }

        TreeNode* ans= new TreeNode(slow->next->val);
        ListNode* r=slow->next->next;
        slow->next=NULL;
        ans->left=sortedListToBST(head);
        ans->right=sortedListToBST(r); 

        return ans;

    }
};
