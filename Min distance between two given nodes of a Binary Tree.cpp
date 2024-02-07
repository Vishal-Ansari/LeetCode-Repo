class Solution{
    public:
    
    Node* lca(Node* root,int a, int b){
        if(!root) return NULL;
        if(root->data==a or root->data==b) return root;
        Node* left=lca(root->left,a,b);
        Node* right=lca(root->right,a,b);
        if(left && right) return root;
        if(left) return left;
        return right;
    }
    int solve(Node* root,int val){
        if(!root) return 0;
        if(root->data==val) return 1;
        int a=solve(root->left,val);
        int b=solve(root->right,val);
        if(!a and !b) return 0;
        else return a+b+1;
    }
    
    int findDist(Node* root, int a, int b) {
        Node* node=lca(root,a,b);
        int x=solve(node,a);
        int y=solve(node,b);
        return x+y-2;
    }
};
