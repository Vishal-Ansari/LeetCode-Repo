class Solution {
public:
    void deleteNode(ListNode* node) {
       ListNode* temp;
        node->val=node->next->val;
        node->next=node->next->next;
    }
};