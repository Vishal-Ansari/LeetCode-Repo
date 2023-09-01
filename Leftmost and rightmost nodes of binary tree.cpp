void printCorner(Node *root){
queue<Node*>q;
q.push(root);
 while(!q.empty()){
    int n=q.size(), flag=0;
    while(n--){
        auto temp=q.front(); q.pop();
        if(n==0||flag==0){
            flag=1; cout<<temp->data<<" ";
        }
        if(temp->left) q.push(temp->left);
        if(temp->right) q.push(temp->right);
    }
 }
}
