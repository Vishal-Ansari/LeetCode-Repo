Node *removeDuplicates(Node *head)
{
    Node* temp=head;
    if(!temp) return NULL;
    while(temp->next!=NULL){
        if(temp->data== temp->next->data){
            temp->next=temp->next->next;
        }
        else
        temp=temp->next;
    }
    return head;
}
