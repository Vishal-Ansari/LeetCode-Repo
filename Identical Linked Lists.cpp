bool areIdentical(struct Node *head1, struct Node *head2) {
    struct Node *t1=head1;
    struct Node *t2=head2;
    
    while(t1!=NULL || t2!=NULL){
        if(!t1 || !t2 || t1->data!= t2->data) return false;
        t1=t1->next;
        t2=t2->next;
    }
    return true;
}
