class Solution {
  public:
    bool compute(Node* head) {
        string str;
        Node* temp=head;
        while(temp){
            str+=temp->data;
            temp=temp->next;
        }
        string s=str;
        reverse(s.begin(),s.end());
        return s==str?true:false;
    }
};
