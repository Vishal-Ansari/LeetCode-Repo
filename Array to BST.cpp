class Solution {
  public:
  
   Node *buildBSTFromInorder(vector<int> &inorder, int start, int end){
      if (start > end)
      {
        return nullptr;
      }
    
      int mid = (start + end) / 2;
      Node *node = new Node(inorder[mid]);
    
      node->left = buildBSTFromInorder(inorder, start, mid - 1);
      node->right = buildBSTFromInorder(inorder, mid + 1, end);
    
      return node;
    }
    
    Node* sortedArrayToBST(vector<int>& nums) {
        Node *root = buildBSTFromInorder(nums, 0, nums.size() - 1);
        return root;
    }
};
