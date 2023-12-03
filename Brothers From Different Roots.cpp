class Solution
{
public:
    void inorder(Node* root, unordered_set<int>& b1){
        if(!root) return;
        inorder(root->left,b1);
        b1.insert(root->data);
        inorder(root->right,b1);
    }
    int countPairs(Node* root1, Node* root2, int x)
    {
        unordered_set<int> b1;
        unordered_set<int> b2;
        inorder(root1,b1);
        inorder(root2,b2);
        int ans=0;
        for(auto it: b1){
            if(b2.find(x-it)!=b2.end()) ans++;
        }
        return ans;
    }
};
