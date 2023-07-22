class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
        unordered_set<int>st;
        if(head==NULL || head-> next==NULL) return head;
        st.insert(head->data);
        
        Node* prev=head;
        Node* temp=head->next;
        
        while(temp!=NULL){
            int x=temp->data;
            if(st.find(x)!=st.end()){
                prev->next=temp->next;
                temp=temp->next;
            }
            else{
                st.insert(x);
                prev=temp;
            }
        }
        return head;
    }
};
