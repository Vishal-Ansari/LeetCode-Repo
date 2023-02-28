class Solution {
public:
    void inorder(TreeNode* root, vector<int>& arr){
        if(!root) return;
        inorder(root->left,arr);
        if(root) arr.push_back(root->val);
        inorder(root->right,arr);

    }
    int kthSmallest(TreeNode* root, int k) {
        vector<int> arr;
        inorder(root,arr);
        return arr[k-1];
    }
};


class Solution {
public:
    int ans,count=0;
    void inorder(TreeNode* root, int k){
        if(!root) return;
        inorder(root->left,k);
        if(root){
            count++;
            if(count==k) ans=root->val;
        }
        inorder(root->right,k);

    }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root,k);
        return ans;
    }
};














class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> ans;
        stack<TreeNode*> st;
        if(!root) return ans[k-1];
        st.push(root);
        while(!st.empty()){
            TreeNode* x=st.top();
            if(x->left)
            {
                st.push(x->left);
                x->left=NULL;
            }
            else
            {
                ans.push_back(x->val);
                st.pop();
                if(x->right!=NULL){
                    st.push(x->right);
                }
            }    
        }
        return ans[k-1];
    }
};
