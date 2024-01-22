class Solution
{
    public:
    void dfs(Node* root, int sum, int target,vector<int>&temp,vector<vector<int>>&ans){
        if(!root) return;
        temp.push_back(root->key);
        if(sum+root->key==target){
            ans.push_back(temp);
        }
        dfs(root->left,sum+root->key,target,temp,ans);
        dfs(root->right,sum+root->key,target,temp,ans);
        temp.pop_back();
    }
    vector<vector<int>> printPaths(Node *root, int sum)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(root,0,sum,temp,ans);
        return ans;
    }
};
