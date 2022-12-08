class Solution {
public:
    void traversal(TreeNode* root, vector<int> &r){
        if(!root) return ;
        traversal(root->left,r);
        if(!root->left && !root->right) r.push_back(root->val);
        traversal(root->right,r);

    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> r1;
        vector<int> r2;
        traversal(root1,r1);
        traversal(root2,r2);
        for(int i=0;i<r1.size();i++)
        cout<<r1[i]<<" ";
        cout<<endl;
         for(int i=0;i<r2.size();i++)
        cout<<r2[i]<<" ";
        if(r1!=r2) return false;
        return true;
    }
};
