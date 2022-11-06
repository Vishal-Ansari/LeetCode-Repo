/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>q;
        int l=1;
        int ans;
        int msum=INT_MIN;
        q.push(root);
        while(!q.empty()){
           int size=q.size();
           int temps=0;
           while(size--){
               auto a=q.front();
               if(a->left)q.push(a->left);
               if(a->right)q.push(a->right);
               q.pop();
               temps+=a->val;
           } 
           if(temps>msum){
               ans=l;
               msum=temps;
           }
           l++;
        }
        return ans;
    }
};
