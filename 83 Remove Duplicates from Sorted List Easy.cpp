class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
     if(!temp) return NULL;
     while(temp->next!=NULL){
         if(temp->val==temp->next->val){
            temp->next =temp->next->next;
         }
         else
         temp=temp->next;
     }
     return head;
    }
};