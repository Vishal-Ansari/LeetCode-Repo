Node* deleteNode(Node *head,int x)
{
    if(x==1) return head->next;
    Node* temp=head;
    while(x>2){
        temp=temp->next;
        x--;
    }
    temp->next=temp->next->next;
    return head;
}
