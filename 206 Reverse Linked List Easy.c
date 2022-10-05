struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *nextnode,*currentnode,*prevnode=NULL;
    nextnode=currentnode=head;
    while(nextnode!=NULL)
    {
        nextnode=nextnode->next;
        currentnode->next=prevnode;
        prevnode=currentnode;
        currentnode=nextnode;
    }
    head=prevnode;
    
    return head;
}