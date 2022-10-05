class Solution {
public:
    int preindex=0;
    TreeNode* buildTreeutil(vector<int>& preorder, vector<int>& inorder,int is, int ie){
        if(is>ie)
            return NULL;
        TreeNode* root= new TreeNode(preorder[preindex]);
        preindex++;
        
        int inIndex;
        for(int i=is;i<=ie;i++){
            if(inorder[i]==root->val)
            { inIndex=i;
            break;
            }
        }
        
        root->left=buildTreeutil(preorder,inorder,is,inIndex-1);
        root->right=buildTreeutil(preorder,inorder,inIndex+1,ie);
        
        return root;
    }
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        TreeNode* ans= buildTreeutil(preorder,inorder,0,inorder.size()-1);
        return ans;
    }
};