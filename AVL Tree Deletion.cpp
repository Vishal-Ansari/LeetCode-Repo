Node *left(Node *root){ // left rotation
    Node *tmp = root->right;
    root->right = tmp->left;
    tmp->left = root;
    return tmp;
}

Node *right(Node *root){ // right rotation
    Node *tmp = root->left;
    root->left = tmp->right;
    tmp->right = root;
    return tmp;
}

Node *RL(Node *root){ // right left Rotation
    root->right = right(root->right);
    return left(root);
}

Node *LR(Node *root){ // left right Rotation
    root->left = left(root->left);
    return right(root);
}

Node* Minimum(Node *root){
    if(!root) return root;
    if(!root->left) return root->right;
    root->left = Minimum(root->left);
    return root; 
}

Node* Maximum(Node *root){
    if(!root) return root;
    if(!root->right) return root->left;
    root->right = Maximum(root->right); 
    return root;
}

int height(Node *root){  // for height of the AVL tree
    if(!root) return 0;
    return 1+max(height(root->left),height(root->right));
}

Node *check(Node *root){
    if(!root) return root;
    root->left = check(root->left);
    root->right = check(root->right);
    int a = height(root->left);
    int b = height(root->right);
    if(a-b > 1 or a-b < -1){
        if(a>b){ // problem in Left subTree
            if(height(root->left->left)<height(root->left->right)) root = LR(root);
            else root = right(root);
        }
        else{ // problem in Right subTree
            if(height(root->right->left)>height(root->right->right)) root = RL(root);
            else root = left(root);
        }
    }
    root->height = max(height(root->left),height(root->right))+1; // updating height
    return root;
}

Node* deleteNode(Node* root, int data)
{
    if(!root) return root;
    if(root->data == data){
        if(!root->left and !root->right) return root->left;
        else if(!root->left){
            Node *ptr = root->right;
            while(ptr->left) ptr=ptr->left;
            root->data = ptr->data;
            root->right = Minimum(root->right);
        }
        else{
            Node *ptr = root->left;
            while(ptr->right) ptr=ptr->right;
            root->data = ptr->data;
            root->left = Maximum(root->left);
        }
    }
    else if(data < root->data) root->left = deleteNode(root->left,data);
    else root->right = deleteNode(root->right,data);
    root = check(root);
    return root;
}
