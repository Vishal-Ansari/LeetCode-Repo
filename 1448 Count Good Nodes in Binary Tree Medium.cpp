class Solution {
public:
    
    int search(TreeNode* root,int max){
        if(!root) return 0;
        int count=0;
        if(root->val>=max){
            count+=1;
            max=root->val;
        }
        count+=search(root->left,max);
        count+=search(root->right,max);
        return count;
    }
    
    int goodNodes(TreeNode* root) {
        return search(root,INT_MIN);
    }
};









class Solution {
public:
    
    int search(TreeNode* root,int max){
        if(!root) return 0;
        int count=0;
        if(root->val>=max){
            count+=1;
            max=root->val;
        }
        count+=search(root->left,max);
        count+=search(root->right,max);
        return count;
    }
    
    int goodNodes(TreeNode* root) {
        int gn=1;
        int X=root->val;
        if(root==NULL) return 0;
        if(!root->left && !root->right) return 1;
        gn+=search(root->left,root->val);
        gn+=search(root->right,root->val);
        return gn;
        
    }
};