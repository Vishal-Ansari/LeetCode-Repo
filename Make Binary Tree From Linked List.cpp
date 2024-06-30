void constructTree(int ind, vector<int> &arr, TreeNode* &node)
{
    node = new TreeNode(arr[ind]);
    int leftInd = 2*ind + 1, rightInd = 2*ind + 2;
    
    if(leftInd < arr.size())
        constructTree(leftInd,arr,node->left);
    
    else
        return;
    
    if(rightInd < arr.size())
        constructTree(rightInd,arr,node->right);
    
}
void convert(Node *head, TreeNode *&root) {
    vector<int> arr;
    Node* temp = head;
    while(temp != NULL)
    {
        arr.push_back(temp->data);
        temp = temp->next;
    }
    constructTree(0,arr,root);
}
