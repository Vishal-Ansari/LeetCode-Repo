class Solution {
  public:
   Node* prev = NULL;
    void populateNext(Node *root)
    {
      if(root == NULL) return;
      populateNext(root->left);
      if(prev){
          prev->next = root;
      }
      prev = root;
      populateNext(root->right);
    }
};
