/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        vector<ListNode*>ans(k,NULL);
        int size=0;
        ListNode* temp=head;
        while(temp!=NULL){
            size++;
            temp=temp->next;
        }
        temp=head;
        int base=size/k;
        int extra=size%k;

        int i=0;
        for(;i<extra && head;i++){
            ans[i]=head;
            for(int j=0;j<base;j++)
            head=head->next;

            temp=head;
            head=head->next;
            temp->next=NULL;

        }

        for(;i<k && head;i++){
            ans[i]=head;
            for(int j=1;j<base;j++)
            head=head->next;

            temp=head;
            head=head->next;
            temp->next=NULL;

        }
        return ans;
    }
};
