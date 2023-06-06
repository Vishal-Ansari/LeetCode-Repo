class Solution
{
    public:
    void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
    {
        if(root){
            // go on the extreme left 
            findPreSuc(root->left,pre,suc,key);
            // when at the extreme left check the value if less than key than it can be predecessor
            if(root->key < key){
                pre=root;
            }
            // if value > key and succ is null than it is succesoor 
            //the next value will be greater than that so it is only sucessor
            if(root->key> key && suc==NULL){
                suc=root;
            }
            // when check the left subtree of root now check the right subtree of the root 
            findPreSuc(root->right,pre,suc,key);
        }
        else return;
    }
};
