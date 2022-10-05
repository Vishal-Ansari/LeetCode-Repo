class Solution {
public:
    bool isEvenOddTree(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root) ;
        
        bool even=true ;
        
        while(!q.empty()){
            int size= q.size() ;
            int maxi = INT_MIN ;
            int mini =INT_MAX ;
            
            for(int i=0; i<size ;i++){
                TreeNode* node= q.front() ;
                q.pop() ;
                
                if(even){
                    if(node->val %2 == 0) return false ;
                    if(node->val > maxi) maxi =node->val ;
                    else return false ;
                }
                else{
                    if(node->val %2 != 0) return false ;
                    if(node->val < mini) mini=node->val ;
                    else return false ;
                }
                
                
                if(node->left)
                    q.push(node->left) ;
                if(node->right)
                    q.push(node->right) ;
            }
            
            even = !even ;
        }
        
        return true ;
    }
};