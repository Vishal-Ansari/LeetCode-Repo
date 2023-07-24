class Solution
{
    public:
    vector<int> rightView(Node *root)
    {
       queue<Node*> q;
       vector<int> ans;
       q.push(root);
       while(!q.empty()){
           int size=q.size();
           while(size){
               Node* node=q.front();
               if(size==1) ans.push_back(q.front()->data);
               q.pop();
               if(node->left) q.push(node->left);
               if(node->right) q.push(node->right);
               size--;
           }
       }
       return ans;
    }
};
