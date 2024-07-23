class Solution {
  public:
    // Function to check whether a Binary Tree is BST or not.
    void inorder(Node* root,vector<int> &arr){
        if(!root) return;
        inorder(root->left,arr);
        arr.push_back(root->data);
        inorder(root->right,arr);
    }
    bool isBST(Node* root) {

        vector<int> arr;
        inorder(root,arr);
        int n=arr.size();
        if(n==1 or n==0) return true;
        for(int i=1;i<n;i++){
            if(arr[i-1]>=arr[i]) return false;
        }
        return true;
    }
};
