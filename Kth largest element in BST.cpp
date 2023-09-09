class Solution {
public:
    int kthLargest(Node *root, int K) {
        int kthLargestValue = -1; // Initialize the result.
        reverseInorder(root, K, kthLargestValue);
        return kthLargestValue;
    }
    void reverseInorder(Node* root, int& K, int& kthLargestValue) {
        if (!root || K <= 0) {
            return;
        }
        reverseInorder(root->right, K, kthLargestValue);
        K--;

        if (K == 0) {
            kthLargestValue = root->data;
            return;
        }
        reverseInorder(root->left, K, kthLargestValue);
    }
};
