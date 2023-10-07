class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if(! head || !head->next)
        return head;
        Node *temp=head->next;
        head->next=pairWiseSwap(temp->next);
        temp->next=head;
        return temp;
    }
};
