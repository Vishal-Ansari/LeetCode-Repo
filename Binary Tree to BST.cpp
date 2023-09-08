class Solution{
  public:
   void inorderInsert(Node *root,vector<int>&vals){
        if(root==NULL)return;
        inorderInsert(root->left,vals);
        root->data=vals.front();
        vals.erase(vals.begin());
        inorderInsert(root->right,vals);
    }
    void inorder(Node *root,vector<int>&vals){
        if(root==NULL)return;
        inorder(root->left,vals);
        vals.push_back(root->data);
        inorder(root->right,vals);
    }
    Node *binaryTreeToBST (Node *root)
    {
        //Your code goes here
        vector<int>vals;
        inorder(root,vals);
        sort(vals.begin(),vals.end());
        inorderInsert(root,vals);
        return root;
    }
};
