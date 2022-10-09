// First approach with vector
class Solution {
public:
    vector<int>v;
    void inorder(TreeNode* root){
        if(!root) return ;
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    
    
    bool findTarget(TreeNode* root, int k) {
      inorder(root);
        int left=0;
        int right=v.size()-1;
        // if(n==1) return false;
        while(left<right){
            if(v[left]+v[right]==k) return true;
            else if(v[left]+v[right]>k) right--;
            else left++;
        }
        return false;
    }
};






//Second approach with set with another function

class Solution {
public:
   unordered_set<int>st;
    
    bool dfs(TreeNode* root,int k){
        if(!root) return false;
        if(st.find(k-root->val)!=st.end())
            return true;
        st.insert(root->val);
        
        return dfs(root->left,k)|| dfs(root->right,k);
    }
    
    bool findTarget(TreeNode* root, int k) {
       return dfs(root,k);
    }
};





//withoud another function

class Solution {
public:
   unordered_set<int>st;
    
    bool findTarget(TreeNode* root, int k) {
       if(!root) return false;
        if(st.find(k-root->val)!=st.end())
            return true;
        st.insert(root->val);
        
        return findTarget(root->left,k)|| findTarget(root->right,k);
    }
};
