class Solution {
public:
    int getDecimalValue(ListNode* head) {
        string s="";
        while(head!=NULL){
            int data=head->val;
            char x=(data==1)? '1':'0';
            s+=x;
            head=head->next;
        }
        int data=0;
        int base=1;
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='1')
                data+=base;
            base=base*2;
        }
        return data;
    }
};