class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        node* curr=head;
        node* prev=NULL;
        node* nextnode=head;
        int count=0;
        while(count<k && curr!=NULL){
            nextnode=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextnode;
            count++;
        }
        if(curr!=NULL){
            head->next= reverse(curr,k);
        }
        return prev;
    }
};
