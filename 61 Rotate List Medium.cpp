class Solution {
public:
    int count(ListNode* head){
        int n=0;
        ListNode* temp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        return n;
    }
    
    
    
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* temp=head;
        ListNode* prev;
        int n=count(head);
        if(k==n || n==0)
            return head;
       
        else{
            while(k%n>0){
                 while(temp->next!=NULL){
                     prev=temp;
                    temp=temp->next;
                    }
                temp->next=head;// 5->null ki jgh head
                head=temp;
                prev->next=NULL;
                k--;
            }
        }
        
        return head;
    }
};