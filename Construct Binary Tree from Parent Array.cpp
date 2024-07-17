class Solution {
  public:
    Node *createTree(vector<int> parent) {
        int n=parent.size();
        vector<Node*> arr(n);
        Node* root = nullptr;

        for (int i = 0; i <n; ++i) {
            if (parent[i] == -1) {
                arr[i] = new Node(i);
                root = arr[i];
            } else {
                    arr[i] = new Node(i);
            }
        }
        for (int i = 0; i < n; ++i) {
            if (parent[i] != -1) {
                if (arr[ parent[i] ]->left == nullptr) {
                    arr[ parent[i] ]->left = arr[i];
                } else {
                    arr[ parent[i] ]->right = arr[i];
                }
            }
        }
        return root;
    }
};
