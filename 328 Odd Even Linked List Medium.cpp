class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next || !head->next->next) return head;
        ListNode* odd=head;
        ListNode* even=head->next;
        ListNode* odd_temp=head;
        ListNode* even_temp=head->next;

        while(even && even->next){
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=even_temp;
        return head;
    }
};
