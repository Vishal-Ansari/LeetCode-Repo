class Solution {
  public:
    // Function should return all the ancestor of the target node
    vector<int> ans;
    void dfs(struct Node *root, int target, vector<int> &arr){
        if(!root) return;
        if(root->data==target){
            ans=arr;
            return;
        }
        arr.push_back(root->data);
        dfs(root->left,target,arr);
        dfs(root->right,target,arr);
        arr.pop_back();
    }
    vector<int> Ancestors(struct Node *root, int target) {
        vector<int> arr;
        dfs(root,target,arr);
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
