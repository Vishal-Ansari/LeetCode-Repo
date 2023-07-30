class Solution {
public:
    Node* findMin(Node* node) {
        while (node->left != nullptr) {
            node = node->left;
        }
        return node;
    }
    
    Node* inOrderSuccessor(Node* root, Node* x) {
        if (root == nullptr || x == nullptr)
            return nullptr;

        if (x->right != nullptr) {
            return findMin(x->right);
        }

        Node* successor = nullptr;
        while (root != nullptr) {
            if (x->data < root->data) {
                successor = root;
                root = root->left;
            } else if (x->data > root->data) {
                root = root->right;
            } else {
                break;
            }
        }
        return successor;
    }
};
