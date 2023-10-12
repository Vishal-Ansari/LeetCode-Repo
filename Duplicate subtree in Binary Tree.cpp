class Solution {
  public:
     set<vector<int>> s;
    
    bool isLeaf(Node* root){
        if(root==NULL)return true;
        if(root->left==NULL && root->right==NULL)return true;
        return false;
    }
    
    bool solve(Node* root){
        if(!root)return false;
        if(!root->left && !root->right){
            return false;
        }
        if(isLeaf(root->left) && isLeaf(root->right)){
            if(s.find({root->data,root->left==NULL?-1:root->left->data,root->right==NULL?-1:root->right->data})!=s.end()){
                return true;
            }
            s.insert({root->data,root->left==NULL?-1:root->left->data,root->right==NULL?-1:root->right->data});
        }
        return solve(root->left)|solve(root->right);
    }
    
    int dupSub(Node *root) {
         return solve(root);
    }
};
