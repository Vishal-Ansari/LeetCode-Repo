class Solution
{
    public:
    Node *compute(Node *head)
    {
        if(head->next == NULL) return head;
        
        Node * next = compute(head->next);
        
        if(next->data <= head->data){
            head->next = next;
            return head;
        }
        return next;
    }
    
};
