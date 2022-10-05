class Solution {
public:
    string tree2str(TreeNode* root) {
            if(!root)
            return "";
        string s= to_string(root->val);
        if(root->left) s+="(" + tree2str(root->left) +")";
        else if(root->right) s+="()";
        if(root->right) s+="(" + tree2str(root->right) +")";
        return s;
    }
};


















class Solution {
public:
    string tree2str(TreeNode* root) {
        if(!root) return "";
        if(!root->left&& !root->right) return to_string(root->val)+"";
        if(!root->right) return to_string(root->val)+ "("+tree2str(root->left)+")";
      return to_string(root->val)+"("+tree2str(root->left)+")"+"("+tree2str(root->right)+")";
    }
};