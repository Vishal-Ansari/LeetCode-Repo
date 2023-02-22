
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                while(curr->next != NULL && curr->val == curr->next->val){
                    curr = curr->next;
                }
                if(prev == NULL){
                    head = curr->next;
                }
                else{
                    prev->next = curr->next;
                }
                curr = curr->next;
            }
            else{
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};





class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode* curr = head;
        ListNode* dummyHead = new ListNode(-1);
        ListNode* dummyTail = dummyHead;
        while(curr != NULL && curr->next != NULL){
            if(curr->val == curr->next->val){
                while(curr->next != NULL && curr->val == curr->next->val){
                    curr = curr->next;
                }
                dummyTail->next = curr->next;
                curr = curr->next;
            }
            else{
                dummyTail->next = curr;
                dummyTail = curr;
                curr = curr->next;
            }
        }
        return dummyHead->next;
    }
};
