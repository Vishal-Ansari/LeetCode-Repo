class Solution
{
    public:
    struct Node *reverse(struct Node* head){
        Node* current=head;
        Node* nextnode=head;
        Node* prev=NULL;
        while(current){
            nextnode=current->next;
            current->next=prev;
            prev=current;
            current=nextnode;
        }
        return prev;
    }
    void rearrange(struct Node *odd)
    {
        if(!odd || !odd->next) return ;
        struct Node *even=odd->next;
        struct Node *even_head=even;
        while( odd->next && even->next){
            struct Node *en=even->next->next;
            struct Node *on=odd->next->next;
            odd->next=on;
            even->next=en;
            odd=odd->next;
            even=even->next;
            
        }
        even_head=reverse(even_head);
        odd->next=even_head;
    }
};
