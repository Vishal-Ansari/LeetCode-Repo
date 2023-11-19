class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
       Node * ans=new Node(0);
       Node* temp=ans;
       while(head1 and head2){
           if(head1->data==head2->data){
               temp->next= new Node(head1->data);
               head1=head1->next;
               head2=head2->next;
               temp=temp->next;
           }
           else if( head1->data < head2->data) head1=head1->next;
           else head2=head2->next;
       }
       return ans->next;
    }
};
