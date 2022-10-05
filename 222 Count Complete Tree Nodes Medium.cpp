class Solution {
public:
    int countNodes(TreeNode* root) {
        if(!root)   return 0 ;
        int count =0 ;
        
        queue<TreeNode*> q ;
        q.push(root) ;
        
        while(!q.empty()){
            int size = q.size() ;
            
            for(int i=0; i<size; i++){
                TreeNode* node=  q.front() ;
                q.pop() ;
                
                count++ ;
                if(node->left)
                    q.push(node->left) ;
                if(node->right)
                    q.push(node->right) ;
            }
        }
            
        return count ;
    }
};