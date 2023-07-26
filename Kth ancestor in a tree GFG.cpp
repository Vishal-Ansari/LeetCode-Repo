bool find(Node* root, int target, vector<int>&parents){
    if(!root) return false;
    parents.push_back(root->data);
    
    if(root->data==target) return true;
    if(find(root->left,target,parents) || find(root->right,target,parents) )
    return true;
    parents.pop_back();
    
    return false;
}


int kthAncestor(Node *root, int k, int node)
{
    vector<int> parents;
    find(root,node,parents);
    int n=parents.size();
    if(n>k) 
     return parents[n-k-1];
    
    return -1;
}
