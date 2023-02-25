
class Solution {
public:
    int total=0;
    void dfs(TreeNode* root, int sum , long long int currentSum){
        if(root==NULL) return;
        currentSum +=root->val ;
        if(sum==currentSum)
        total++;

        dfs(root->left,sum,currentSum);
        dfs(root->right,sum,currentSum);

    }
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL) return 0;
        dfs(root,sum,0);
        pathSum(root->left,sum);
        pathSum(root->right,sum);

        return total;
    }
};





class Solution {
public:
    unordered_map<long, int> map;
    int count = 0;
    
    void countPathSum(TreeNode* root, int target, long sum){
        if(!root)
            return;
        sum += root->val;       
        if(sum == target)
            count++;
        if(map.find(sum - target) != map.end())         
            count += map[sum - target];
        map[sum]++;
        countPathSum(root->left, target, sum);
        countPathSum(root->right, target, sum);
        map[sum]--;      
    }
    
    int pathSum(TreeNode* root, int targetSum) {
        countPathSum(root, targetSum, 0);
        return count;
    }
};
