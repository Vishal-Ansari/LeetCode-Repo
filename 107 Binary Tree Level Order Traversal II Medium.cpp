class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        if(!root) return {} ;
        
        vector<vector<int>> ans ;
        queue<TreeNode*> q ;
        q.push(root) ;
        
        while(!q.empty()){
            int size = q.size() ;
            vector<int> level ;
            
            for(int i=0; i<size; i++){
                TreeNode* node = q.front() ;
                q.pop() ;
                
                level.push_back(node->val) ;
                
                if(node->left)
                    q.push(node->left) ;
                if(node->right)
                    q.push(node->right) ;
            }
            ans.push_back(level) ;
        }
        
        reverse(ans.begin(), ans.end()) ;
        
        return ans ;
    }
};