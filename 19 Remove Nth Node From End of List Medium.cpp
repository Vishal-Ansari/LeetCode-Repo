class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*temp=new ListNode(-1);
        temp->next=head;
        ListNode* prev=temp , *forw=temp;
        
        while(n--){
            forw=forw->next;
        }
        while(forw->next){
            forw=forw->next;
            prev=prev->next;
        }
        
        prev->next=prev->next->next;
        return temp->next;
    }
};










class Solution {
public:
   
    ListNode* removeNthFromEnd(ListNode* head, int n) {
                
        ListNode* temp=head;
        int count=0;
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
        
        temp=head;
        
        int k=count-n;
             
        if(k==0)
            return temp->next;
        
         
        int i=1;
        while(i<k){
            i++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
        return head;
    }
};