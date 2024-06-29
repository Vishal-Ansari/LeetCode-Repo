class Solution {
  public:
    Node* deleteNode(Node* head, int x) {
        if(x==1) return head->next;
        Node* temp=head;
        Node* pre=NULL;
        while(temp && x>0){
            if(x==1){
               pre->next=temp->next;
               temp=temp->next;
               if(temp) temp->prev=pre;
               break;
            }
            pre=temp;
            temp=temp->next;
            x--;
        }
        return head;
    }
};
