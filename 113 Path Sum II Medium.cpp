class Solution {
public:
    vector<vector<int>>ans;
    vector<int>path;
    void dfs(TreeNode* root, int targetSum, int sum)
    {
        if (!root) 
            return;
        path.push_back(root->val);
        sum+=root->val;

        if(sum == targetSum && !root->left && !root->right) {
            ans.push_back(path);
        }   
                
            dfs(root->left,targetSum,sum);
            dfs(root->right,targetSum,sum);
        path.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
      int sum = 0;
      dfs(root,targetSum,sum);
      return ans;
        
    }
};