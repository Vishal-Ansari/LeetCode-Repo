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
    ListNode* merge(ListNode* l1, ListNode* l2){
        ListNode* head= new ListNode(-1);
        ListNode* temp=head;

        while(l1!=NULL  && l2!=NULL){
            if(l1->val < l2->val){
                temp->next=l1;
                temp=temp->next;
                l1=l1->next;
            }
            else{
                 temp->next=l2;
                temp=temp->next;
                l2=l2->next;
            }
        }

        while(l1!=NULL){
             temp->next=l1;
                temp=temp->next;
                l1=l1->next;
        }
        while(l2!=NULL){
             temp->next=l2;
                temp=temp->next;
                l2=l2->next;
        }
        return head->next;
    }

    ListNode* mergeSort(vector<ListNode*>& lists, int start, int end){
        if(start==end) return lists[start];
        int mid= start + (end-start)/2;
        ListNode* left= mergeSort(lists, start,mid);
        ListNode* right= mergeSort(lists, mid+1,end);
        return merge(left,right);
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n=lists.size();
        if(n==0) return NULL;
        return mergeSort(lists,0,n-1);
    }
};
