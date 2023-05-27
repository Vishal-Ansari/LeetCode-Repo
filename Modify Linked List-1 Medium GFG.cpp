class Solution{
    public:
    Node* findMedian(Node* head){
        if(!head)
            return head;
        Node* slow = head;
        Node* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    
    Node* reverse(Node* head){
        Node* prev = NULL,*nextnode;
        Node* curr = head;
        while(curr){
            nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
        }
        return prev;
    }
    
    void update(Node* &slow,Node* &head){
        Node* ptr = head;
        while(slow){
            int temp = ptr->data;
            ptr->data = slow->data-temp;
            slow->data = temp;
            ptr = ptr->next;
            slow = slow->next;
        }
    }
    
    Node* modifyTheList(struct Node *head){
        if(!head)
            return head;
    
        Node* slow = findMedian(head); // tail of first half
        Node* slow_next = slow->next; // head of second half
    
        Node* prev = reverse(slow_next);
        
        slow->next = prev;
        Node* ptr = head;
        slow = slow->next;
        
        update(slow,head);
    
        slow = findMedian(head);
        slow_next = slow->next;
        
        prev = reverse(slow_next);
        slow->next = prev;
        return head;
        
    }
};
