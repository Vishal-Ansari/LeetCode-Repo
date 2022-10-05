
class Solution {
public:
   
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL && q==NULL)
            return true;
        if(p==NULL|| q==NULL )
            return false;
        return(p->val== q->val && 
               isSameTree(p->left,q->left) && 
               isSameTree(p->right,q->right));

        }
};






class Solution {
public:
    void inorder(TreeNode *root, vector<int>& ans){
        if(root!=NULL){
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
        }
        else ans.push_back(100000);
    }
        void preorder(TreeNode *root, vector<int>& ans){
        if(root!=NULL){
        ans.push_back(root->val);
        preorder(root->left,ans);
        preorder(root->right,ans);
            
        }
        else ans.push_back(100000);
    }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        vector<int> ans1,ans2,ans3,ans4;
        inorder(p,ans1);
        inorder(q,ans2);
        preorder(p,ans3);
        preorder(q,ans4);
        if(ans1==ans2 && ans3==ans4)
            return true;
        else
            return false;
    }
};