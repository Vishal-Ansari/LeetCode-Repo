class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
         if(!head || !head->next) return head;
        Node* pre= NULL;
        Node* curr=head;
        Node* nextnode;
    
        while(curr){
            nextnode=curr->next;
            bool flag=false;
            while(nextnode && curr->data==nextnode->data){
                flag=true;
                Node* del=nextnode;
                nextnode=nextnode->next;
                delete del;
            }
            if(flag){
                if(pre!=NULL){
                    pre->next=nextnode;
                }
                else{
                    head=nextnode;
                }
                delete curr;
            }
            else{
                pre=curr;
            }
            curr=nextnode;
        }
        return head;
    }
};
