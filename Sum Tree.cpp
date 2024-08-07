class Solution {
  public:
        int solve(Node* root , bool &ans){
        if(root == NULL){
            return 0;
        }
        if(root->left == NULL && root->right == NULL){
            return root->data;
        }
        int leftans = solve(root->left , ans);
        int rightans = solve(root->right , ans);
        if(leftans + rightans != root->data){
            ans = false;
        }
        return leftans + rightans +root->data;
    }
    bool isSumTree(Node* root)
    {
        bool ans = true;
        solve(root , ans);
        return ans;
    }
};
