class Solution{
    public:
    /*You are required to complete this method */
    // Return the size of the largest sub-tree which is also a BST
    bool isBST(Node* root,int mn, int mx){
        if(!root) return true;
        if(root->data < mn || root->data > mx ) return false;
        return isBST(root->left, mn, root->data-1) && isBST(root->right,root->data+1,mx);
    }
    
    int sizeOfBst(Node* root){
        if(root==NULL) return 0;
        queue<Node *> q;
        q.push(root);
        int count=1;
        while(!q.empty()){
            Node * node=q.front();
            q.pop();
            if(node->left){
                q.push(node->left);
                count++;
            }
            if(node->right){
                q.push(node->right);
                count++;
            }
        }
        return count;
    }
    
    int largestBst(Node *root)
    {
    	queue<Node*> q;
    	int ans=0;
    	q.push(root);
    	while(!q.empty()){
    	    Node* node=q.front();
    	    q.pop();
    	    if(isBST(node, INT_MIN, INT_MAX)){
    	        int size=sizeOfBst(node);
    	        ans=max(ans,size);
    	    }
    	    if(node->left) q.push(node->left);
    	    if(node->right) q.push(node->right);
    	}
    	return ans;
    }
};
