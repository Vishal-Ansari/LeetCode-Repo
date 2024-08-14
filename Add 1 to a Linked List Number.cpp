class Solution {
  public:
     Node* reverse(Node* head) {
        Node* prev = NULL;
        Node* curr = head;
        while(curr) {
            Node* next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    Node* addOne(Node* head) {
        head = reverse(head);
        
        int carry = 1;
        Node* tail = NULL;
        Node* temp = head;
        
        while(temp && carry) {
            if(temp->data == 9) {
                temp->data = 0;
            } else {
                temp->data = temp->data + 1;
                carry = 0;
            }
            tail = temp;
            temp = temp->next;
        }
        
        if(carry) {
            tail->next = new Node(1);
        }
        
        Node* res = reverse(head);
        
        return res;
    }
};
