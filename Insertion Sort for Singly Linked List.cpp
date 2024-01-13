class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
       if (!head_ref || head_ref->next == NULL)
            return head_ref;
        Node* faltu = new Node(-1);
        faltu->next = head_ref;
        
        Node * curr = head_ref->next;
        Node * prev = head_ref;
        while(curr != NULL){
            Node * temp = faltu;
            if (prev->data < curr->data){
                curr = curr->next;
                prev = prev->next;
                continue;
            }
            while(temp->next->data < curr->data){
                temp = temp->next;
            }
            prev->next = curr->next;
            curr->next = temp->next;
            temp->next = curr;
            curr = prev->next;

        }
        return faltu->next;
    }
    
};
