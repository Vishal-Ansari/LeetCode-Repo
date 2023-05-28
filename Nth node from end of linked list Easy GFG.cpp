Node* reverse(Node *head){
    Node* prev=NULL;
    Node* current=head;
    Node* nextnode;
    while(current){
        nextnode=current->next;
        current->next=prev;
        prev=current;
        current=nextnode;
    }
    return prev;
}
int getNthFromLast(Node *head, int n)
{
       Node *temp=reverse(head);
       int k=1;
       while(temp){
           if(k==n) return temp->data;
           temp=temp->next;
           k++;
       }
       return -1;
}
