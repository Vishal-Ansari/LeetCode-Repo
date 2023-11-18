class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
        Node* front=head;
        Node* last=head;
        int n=0;
        while(last->next!=NULL){
            last=last->next;
            n++;
        }
        int i=0;
        while(i<=n/2){
            int x=front->data;
            front->data=last->data;
            last->data=x;
            front=front->next;
            last=last->prev;
            i++;
        }
        return head;
    }
};
