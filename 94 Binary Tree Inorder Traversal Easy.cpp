class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        ans(root,res);
        return res;
    }
    void ans(TreeNode* root,vector<int>& res){
        if(root!=NULL){
            ans(root->left,res);
            res.push_back(root->val);
            ans(root->right,res);
        }
    }
};








class Solution {
public:
    
    void inorder(TreeNode* root, vector<int> &ans){
        if(root!=NULL){
            inorder(root->left, ans);
            ans.push_back(root->val);
            inorder(root->right,ans);
        }
    }
    
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        inorder(root,ans);
        return ans;
        
    }
};