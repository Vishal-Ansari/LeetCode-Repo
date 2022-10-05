class Solution {
public:
    TreeNode* solve(int low, int end, vector<int>& nums){
        if(low > end)
            return NULL ;
        
        int mid = (low+end)/2 ;
        TreeNode* root = new TreeNode(nums[mid]) ;
        
        root->left = solve(low, mid-1, nums) ;
        root->right = solve(mid+1, end, nums) ;
        
        return root ;
    }
        
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return solve(0, nums.size()-1, nums) ;
    }
};