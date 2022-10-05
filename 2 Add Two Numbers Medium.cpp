class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        string st1;
//         string st2,st3;
//         int n1=0;
//         int n2=0;
//         int sum;
//         int n;
        
//         ListNode* L3=new ListNode();
//         L3->next=NULL;
//         ListNode* temp= L3;
//         while(l1!=NULL)
//         {
//             n1=n1*10+l1->val;
//             l1=l1->next;
//         }
//         while(l2!=NULL)
//         {
//             n2=n2*10+l2->val;
//             l2=l2->next;
//         }
//         st1=to_string(n1);
//         st2=to_string(n2);
        
//         reverse(st1.begin(),st1.end());
//         reverse(st2.begin(),st2.end());
//         n1=stoi(st1);
//         n2=stoi(st2);
//         sum=n1+n2;
        
//         while(sum!=0){
//             n=sum%10;
//             sum=sum/10;
//             ListNode *node=new ListNode(n);
//             temp->next=node;
//             temp=temp->next;
//         }
//         return L3->next;
        
        
        ListNode* L3=new ListNode();
        ListNode* temp=L3;
        int carry=0;
        while(l1!=NULL || l2!=NULL || carry ){
            int sum=0;
            if(l1!=NULL){
                sum+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                sum+=l2->val;
                l2=l2->next;
            }
            
            sum=sum+carry;
            carry=sum/10;
              ListNode *node=new ListNode(sum%10);
            temp->next=node;
            temp=temp->next;
        }
        return L3->next;
                    
        
    }
};