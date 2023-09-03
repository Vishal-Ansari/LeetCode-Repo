class Solution{
  public:
    // Return True if the given trees are isomotphic. Else return False.
    bool solve(Node* root1,Node* root2){
        if(root1==NULL or root2 == NULL)  return 1;
        if(root1->data!=root2->data)  return 0;
        
        int l1 = root1->left?root1->left->data:0;
        int r1 = root1->right?root1->right->data:0;
        int l2 = root2->left?root2->left->data:0;
        int r2 = root2->right?root2->right->data:0;
        
        bool f = 0;
        if(l1==r2 && l2==r1) 
        f |=(solve(root1->right,root2->left) && solve(root1->left,root2->right));
        
        if(l1==l2 && r1==r2)  
        return f|=(solve(root1->left,root2->left)) && solve(root1->right,root2->right);
        return f;
    }
    bool isIsomorphic(Node *root1,Node *root2)
    {
        return solve(root1,root2);
        
    }
};
