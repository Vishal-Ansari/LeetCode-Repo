 Node* insertToAVL(Node* node, int data)
    {
        if(node==NULL){
            return new Node(data);
        }else if(data > node->data){
            node->right = insertToAVL(node->right,data);
        }else if(data < node->data){
            node->left = insertToAVL(node->left,data);
        }else{
            return node;
        }
        
        node->height = 1+max(height(node->left),height(node->right));
        
        int balance = getBalance(node);
        
        if(balance>1 && data < node->left->data){
            return rightRotation(node);
        }
        if(balance<-1 && data>node->right->data){
            return leftRotation(node);
        }
        if(balance>1 && data>node->left->data){
            node->left = leftRotation(node->left);
            return rightRotation(node);
        }
        if(balance<-1 && data<node->right->data){
            node->right = rightRotation(node->right);
            return leftRotation(node);
        }
        return node;
