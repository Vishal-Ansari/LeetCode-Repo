class Solution {
public:
    vector<int>tree1 ;
    vector<int>tree2 ;
    
    void tree1Ele(TreeNode*root1){
        if(root1==NULL) return  ;
        
        tree1Ele(root1->left) ;
        tree1.push_back(root1->val) ;
        tree1Ele(root1->right) ;
    }
    
    void tree2Ele(TreeNode*root){
        if(root==NULL) return  ;
        
        tree2Ele(root->left) ;
        tree2.push_back(root->val) ;
        tree2Ele(root->right) ;
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        tree1Ele(root1) ;
        tree2Ele(root2) ;
        
        vector<int>ans ;
        int i=0 ;
        
        for(i=0; i<tree1.size() ;i++)
            ans.push_back(tree1[i]) ;
        
        for(i=0; i<tree2.size() ;i++)
            ans.push_back(tree2[i]) ;
        
        sort(ans.begin() ,ans.end()) ;
        return ans ;
    }
};  