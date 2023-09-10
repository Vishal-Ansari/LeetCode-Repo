Node* insert(Node* &node, int data) {
        if(!node) {
            node = new Node(data);
            return node;
        }
        if(node->data == data) return node;
        else if(node->data > data) insert(node->left, data);
        else insert(node->right, data);
    }
