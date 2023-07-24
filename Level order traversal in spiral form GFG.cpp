vector<int> findSpiral(Node *root)
{
    if(!root) return {};
    queue<Node*> q;
    vector<int> ans;
    q.push(root);
    int flag=1;
    
    while(!q.empty()){
        int size=q.size();
        vector<int> temp;
        while(size--){
            Node* node=q.front();
            q.pop();
            temp.push_back(node->data);
            if(node->left) q.push(node->left);
            if(node->right) q.push(node->right);
        }
        if(flag==0){
            for(auto it: temp) ans.push_back(it);
            flag=1;
        }else{
            reverse(temp.begin(),temp.end());
            for(auto it: temp) ans.push_back(it);
            flag=0;
        }
    }
    return ans;
}
