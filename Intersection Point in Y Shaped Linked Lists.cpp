class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
    int intersectPoint(Node* head1, Node* head2) {
        int c1=0,c2=0;
        Node* temp=head1;
        while(temp) {
            c1++;
            temp=temp->next;
        }
        temp=head2;
        while(temp) {
            c2++;
            temp=temp->next;
        }
        int dist= abs(c1-c2);
        Node* t1=head1, *t2=head2;
        while(dist!=0){
                if(c1>c2){
                    t1=t1->next;
                }
                else{
                    t2=t2->next;
                }
                dist--;
            }
        while(t1 && t2){
            if(t1==t2) return t1->data;
            t1=t1->next;
            t2=t2->next;
        }
        return -1;
    }
};
